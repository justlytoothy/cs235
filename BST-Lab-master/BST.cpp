#pragma once

#include "BST.h"

BST::BST () {
    cout << "In constructor" << endl;
}

BST::~BST () {
    cout << "In destructor" << endl;
}


/*
	* Returns the root node for this tree
	*
	* @return the root node for this tree.
*/
NodeInterface * BST::getRootNode() {

}

	/*
	* Attempts to add the given int to the BST tree
	*
	* @return true if added
	* @return false if unsuccessful (i.e. the int is already in tree)
	*/
bool BST::add(int data) {
    cout << "add"<<endl;
    Node *ptr = new Node(data);
    ptr->leftChild = NULL; // To test that the friend relationship works
    NodeInterface *rval = ptr->getLeftChild();
    long value = (long)rval;
    cout << "Added "<<value<<endl;
    root = ptr;
}

	/*
	* Attempts to remove the given int from the BST tree
	*
	* @return true if successfully removed
	* @return false if remove is unsuccessful(i.e. the int is not in the tree)
	*/
bool BST::remove(int data) {
    bool test = true;
    return test;
}

	/*
	* Removes all nodes from the tree, resulting in an empty tree.
	*/
void BST::clear() {

}