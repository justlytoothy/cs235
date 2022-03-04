#include "BST.h"
/*
	* Returns the root node for this tree
	*
	* @return the root node for this tree.
*/
NodeInterface * BST::getRootNode() const{
    return this->root;
}

	/*
	* Attempts to add the given int to the BST tree
	*
	* @return true if added
	* @return false if unsuccessful (i.e. the int is already in tree)
	*/
bool BST::add(int data) {
    //cout << "In big add" << endl;
    return add(data, this->root);
}

bool BST::add(int data, Node *&node) {
    if (node == NULL) {
        node = new Node(data);
        howMany++;
        return true;
    }
    else if (node->getData() == data) {
        return false;
    }
    else if (data < node->getData()) {
        return add(data, node->getLeft());
    }
    else {
        return add(data, node->getRight());
    }
}

	/*
	* Attempts to remove the given int from the BST tree
	*
	* @return true if successfully removed
	* @return false if remove is unsuccessful(i.e. the int is not in the tree)
	*/
bool BST::remove(int data) {
    return remove(this->root, data);
}

	/*
	* Removes all nodes from the tree, resulting in an empty tree.
	*/
void BST::clear() {
    cout << "In clear" << endl;
    recurClear(this->root);
    this->root = NULL;
    howMany = 0;

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

void BST::recurClear(Node *node) {
    if (node != NULL) {
        recurClear(node->getLeft());
        recurClear(node->getRight());
        delete node;
    }
}

bool BST::remove(Node *&localRoot,int data) {
    if (localRoot == NULL) {
        return false;
    }
    else {
        if (data < localRoot->data) {
            return remove(localRoot->getLeft(), data);
        }
        else if (data > localRoot->data) {
            return remove(localRoot->getRight(),data);
        }
        else {
            Node *oldRoot = localRoot;
            if (localRoot->getLeft() == NULL) {
                localRoot = localRoot->getRight();
                delete oldRoot;
                howMany--;
            }
            else if (localRoot->getRight() == NULL) {
                localRoot = localRoot->getLeft();
                delete oldRoot;
                howMany--;

            }
            else 
                replace(oldRoot, localRoot->getLeft());


            return true;
        }
    }
}

void BST::replace(Node*& oldRoot, Node*& localRoot) {
    if (localRoot->getRight() != NULL) {
        replace(oldRoot,localRoot->getRight());
    }
    else {
        oldRoot->data = localRoot->data;
        remove(oldRoot->getLeft(), localRoot->data);
    }
}
