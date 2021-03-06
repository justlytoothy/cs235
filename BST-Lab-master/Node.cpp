#include "Node.h"

Node::~Node() {
    cout << "In Node Deconstructor" << endl;
}

	/*
	* Returns the data that is stored in this node
	*
	* @return the data that is stored in this node.
	*/
int Node::getData() const{
	//cout << "Get data" << endl;
    return data;
}

	/*
	* Returns the left child of this node or null if it doesn't have one.
	*
	* @return the left child of this node or null if it doesn't have one.
	*/
NodeInterface * Node::getLeftChild() const{
    //cout << "Getting Left Child" << endl;
    return leftChild;

}

	/*
	* Returns the right child of this node or null if it doesn't have one.
	*
	* @return the right child of this node or null if it doesn't have one.
	*/
NodeInterface * Node::getRightChild() const{
    //cout << "Getting Right Child" << endl;
    return rightChild;
}

void Node::setLeft(Node *ptr) {
    leftChild = ptr;
}

void Node::setRight(Node *ptr) {
	rightChild = ptr;
}

Node*& Node::getRight(){
	//cout << "Get right" << endl;
	return rightChild;
}



Node*& Node::getLeft(){
	//cout << "Get left" << endl;
	return leftChild;

}