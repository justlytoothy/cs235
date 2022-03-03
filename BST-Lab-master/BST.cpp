#include "BST.h"

BST::BST () {
    cout << "In constructor" << endl;
    root = NULL;
}

BST::~BST () {
    cout << "In destructor" << endl;
}


/*
	* Returns the root node for this tree
	*
	* @return the root node for this tree.
*/
NodeInterface * BST::getRootNode() const{
    return root;
}

	/*
	* Attempts to add the given int to the BST tree
	*
	* @return true if added
	* @return false if unsuccessful (i.e. the int is already in tree)
	*/
bool BST::add(int data) {
    if (isDup(data)) {
        cout << "adding int to tree"<<endl;
        Node *ptr = new Node(data);
        /*ptr->leftChild = NULL; // To test that the friend relationship works
        NodeInterface *rval = ptr->getLeftChild();
        long value = (long)rval;
        cout << "Added "<<value<<endl;
        root = ptr;*/
        if (root == NULL) {
            root = ptr;
        }
        else if (root->data < data) {
            cout << "More work needed to replace root of tree" << endl;
        }
        //else if ()
    }
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

bool BST::isGreat(Node* old,Node* lNew) {
    if (old->data < lNew->data) {
        return true;
    }
    else if (lNew->data < old->data) {
        return false;
    }
    else {
        cout << "Equal" << endl;
        return false;
    }
}

bool BST::isDup(int data) {
    Node *searchPtr = root;
    bool found = false;
    bool finished = false;
    while (!found || !finished) {
        if (searchPtr->leftChild == NULL && searchPtr->rightChild == NULL) {
            finished = true;
        }
        else if (searchPtr->data == data) {
            found = true;
            break;
        }
        else if (data > searchPtr->data) {
            searchPtr = searchPtr->rightChild;
        }
        else {
            searchPtr = searchPtr->leftChild;
        }
    }
    return found;
}

/*
Node *u = root, *prev = NULL, *next;
    bool found = false;
    while (u != NULL) {
        if (prev == u->parent) {
            if (u->leftChild != NULL) {
                next = u->leftChild; 
            } 
            else if (u->rightChild != NULL){ 
                next = u->rightChild;
            }
            else {
                next = u->parent;
            }
        } 
        else if (prev == u->leftChild) {
            if (u->rightChild != NULL) {
                next = u->rightChild;
            }
            else {
                next = u->parent;
            }
        } 
        else {
            next = u->parent;
        }
        prev = u;
        u = next;
    }
    return found;
*/