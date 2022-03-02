#pragma once

#include <iostream>
#include "NodeInterface.h"
#include "BST.h"
using namespace std;

class Node : public NodeInterface {

friend class BST; //make private members accessible by BST class

private:

    Node* leftChild;
    Node* rightChild;
    int data;

public:
	Node(int datas);
	~Node();

	/*
	* Returns the data that is stored in this node
	*
	* @return the data that is stored in this node.
	*/
	int getData() const;

	/*
	* Returns the left child of this node or null if it doesn't have one.
	*
	* @return the left child of this node or null if it doesn't have one.
	*/
	NodeInterface * getLeftChild() const;

	/*
	* Returns the right child of this node or null if it doesn't have one.
	*
	* @return the right child of this node or null if it doesn't have one.
	*/
	NodeInterface * getRightChild() const;

};