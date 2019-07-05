#ifndef NODE_H
#define NODE_H

template<class T>
class Node
{
public:
	int info;
	Node*left;
	Node*right;
	Node();
	Node(T);
	Node(const Node<T>&);
	Node<T>& operator=(const Node<T>&);
	~Node();
};

#endif
