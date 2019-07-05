#include<iostream>
using namespace std;
#include"BST.h"

int main()
{
	BST<int> T;
	T.setRoot(50);
	T.insert(20);
	T.insert(60);
	T.insert(15);
	T.insert(35);
	T.insert(55);
	T.insert(65);
	T.insert(14);
	//	T.insert(12);
	T.insert(19);
	T.insert(30);
	T.insert(45);
	T.insert(53);
	T.insert(58);
	T.insert(63);
	T.insert(70);

	//	T.inOrderTraversal();
	//	cout << endl;
	//	T.postOrderTraversal();
	//	cout << endl;
//	T.preOrderTraversal();
//	cout << endl;
	//	cout << T.getParent(21) << endl;
	//	cout << T.countNodes() << endl;
	//	cout << T.minValue() << endl;
	//	cout << T.countLeafNodes() << endl;
	//cout << T.isComplete() << endl;
	T.levelOrder();
	cout << endl << T.LCA(20,20) << endl;
	cout << endl;
}