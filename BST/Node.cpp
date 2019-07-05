#include "Node.h"


template<class T>
Node<T>::Node()
{
	left = right = nullptr;
}
template<class T>Node<T>::Node(T val)
{
	info = val;
	left = right = nullptr;
}
template<class T>Node<T>::Node(const Node<T>&rn)
{
	right = left = new Node<T>;
	info = rn.info;
	left = rn.left;
	right = rn.right;
}
template<class T>Node<T>& Node<T>::operator=(const Node<T>&rn)
{
	right = left = new Node<T>;
	info = rn.info;
	left = rn.left;
	right = rn.right;
	return (*this);
}
template<class T>
Node<T>::~Node()
{
}
template Node<int>;