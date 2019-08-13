#include <iostream>

using namespace std;


template <class T>

class Autoptr
{
public:
	Autoptr	(T* ptr = nullptr)
		:_ptr(ptr)
	{}
	~Autoptr()
	{
		if (_ptr)
			delete _ptr;
	}
	T& operator*()
	{
		return *_ptr;
	}
	T& operator->()
	{
		return _ptr;
	}
	Autoptr(Autoptr<T>& ap)
		:_ptr(ap._ptr)
	{
		ap._ptr = nullptr;
	}
	Autoptr<T>& operator=(Autoptr<T>& ap)
	{
		if (this != &ap)
		{
			if (_ptr)
				delete _ptr;
			_ptr = ap._ptr;
			ap._ptr = nullptr;
		}
		return *this;
	}
private:
	T* _ptr;
};