#ifndef BST_H
#define BST_H
#include"Node.h"
#include"Queue.h"

template <class T>
class BST
{
	Node<T>*root;
	void VLR(Node<T>*);
	void LRV(Node<T>*);
	int countLRnodes(Node<T>*);
	void LVR(Node<T>*);
	bool isNodeExist(T);
	Node<T>* findNodePlace(Node<T>*, T);
	T findParent(Node<T>*, T);
	Node<T>*searchNode(Node<T>*, T);
	T findMinValue(Node<T>*);
	int findLeafNodes(Node<T>*);
	bool checkComplete(Node<T>*);
	void printLevel(Queue<T>&, Node<T>*);
	T findLCA(Node<T>*, int, int);
public:
	BST<T>();
	void setRoot(T);
	bool isEmpty();
	void insert(T);
	void preOrderTraversal();
	void inOrderTraversal();
	void postOrderTraversal();
	T getParent(T node);
	int countNodes();
	T minValue();
	int countLeafNodes();
	bool isComplete();
	T LCA(int, int);

	bool remove(T nod);
	void diplayAncestors(T nod);
	void displayDescendents(T nod);
	int heightOfTree();

	void levelOrder();
	//void displayLevel(int levelNo);
	//int findLevelOfNode(T nod);
	//void displayParenthesizedView();
	//void displayExplorerView();

	~BST<T>();
};

#endif
