#pragma once

#include "Node.h"

Node::Node(int datas) {
    cout << "In Node Constructor" << endl;
    data = datas;
    leftChild = NULL;
    rightChild = NULL;
}
Node::~Node() {
    cout << "In Node Deconstructor" << endl;
}

	/*
	* Returns the data that is stored in this node
	*
	* @return the data that is stored in this node.
	*/
int Node::getData() const{
    int test = 1;
    return test;
}

	/*
	* Returns the left child of this node or null if it doesn't have one.
	*
	* @return the left child of this node or null if it doesn't have one.
	*/
NodeInterface * Node::getLeftChild() const{
    cout << "Getting Left Child" << endl;
}

	/*
	* Returns the right child of this node or null if it doesn't have one.
	*
	* @return the right child of this node or null if it doesn't have one.
	*/
NodeInterface * Node::getRightChild() const{
    cout << "Getting Right Child" << endl;
}