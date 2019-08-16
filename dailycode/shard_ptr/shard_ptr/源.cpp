#include <iostream>

#include <mutex>

using namespace std;
template <class T>

class Shard_Ptr
{
public:

	Shard_Ptr(T* ptr = nullptr)
		:_ptr(ptr)
		,Count(new int(1))
		,Mutex(new mutex)
	{}
	~Shard_Ptr()
	{
		Release();
	}
	Shard_Ptr(const Shard_Ptr<T>& ret)
		:_ptr(ret._ptr)
		,Count(ret.Count)
		,Mutex(ret.Mutex)
	{
		AddCount();
	}

	Shard_Ptr<T>& operator=(const Shard_Ptr<T>& ret)
	{
		if (ret._ptr != _ptr)
		{
			Release()
			_ptr = ret._ptr;
			Count = ret.Count;
			Mutex = ret.Mutex;
			AddCount();
		}
		return *this;
	}
	T& operator*()
	{
		return *_ptr;
	}
	T* operator->()
	{
		return _ptr;
	}
private:
	AddCount()
	{
		Mutex.lock();
		++(*Count);
		Mutex.unlock();
	}
	void Release()
	{
		bool flag = flase;
		Mutex.lock();
		if (--(*Count) == 0)
		{
			delete _ptr;
			delete Count;
			flag = true;
		}
		Mutex.unlock();
		if (flag)
			delete Mutex;

	}
private:
	T* _ptr;
	mutex Mutex;
	int* Count;
};
