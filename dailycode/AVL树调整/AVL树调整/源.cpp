#include <iostream>

using namespace std;

template <class T>
struct AVL
{
	AVL(const T _data)
		:right(nullptr)
		,left(nullptr)
		,parents(nullptr)
		,data(_data)
		,bf(0)
	{}
	AVL<T>* right;
	AVL<T>* left;
	AVL<T>* parents;
	T data;
	int bf;
};

//v右单旋  parents->bf = -1  parents->left->bf = 0; 然后向left->left插入元素
void rightsimple(AVL parent)
{
	AVL* subL = parents->left;
	AVL* subLR = subL->right;

	parents->right->left = subLR;
	subL->right = parents;

	if (subLR != nullptr)
		subLR->parents = parents;
	if (parents == root)
	{
		subL = root;
		parent->parents = nullptr;
	}
	else
	{
		if (parent->parents->left == parent)
		{
			parent->parents->left = subL;
		}
		else
		{
			parent->parents->right = subL;
		}
		subL->parent = parent->parents;
	}
	parent->parents = subL;
	subL->bf = parent->bf = 0;
}