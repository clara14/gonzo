#pragma once
#include "cmpslib.h"




// you can define ELEMTYPE prior to this to be another datatype
#ifndef ELEMTYPE
#define ELEMTYPE int
#endif

 struct TreeNode 
 {
    ELEMTYPE data;    // The element being stored
    TreeNode *left;   // The address of the left subtree
    TreeNode *right;  // The address of the right subtree
};




class AVL
{
private:
    TreeNode *root; // The address of the root node



    // Helper function for insert. It will see if the value belongs in the left or 
    // right subtree. If the correct subtree is currently nullptr , it will allocate a 
    // new node and insert it there. Otherwise, it will recursively call 
    // insertSubtree on that subtree.
    TreeNode*	 insertSubtree(TreeNode *, ELEMTYPE);

    // Helper function for search. Performs the AVL search on the given subtree 
    // root node. It uses recursion to traverse the proper search path for the 
    // given value.
	TreeNode *searchSubtree(TreeNode *, ELEMTYPE);

    // Helper function for in-order print traversal. Performs an in-order print 
    // traversal by recursively calling inorderSubtree on the left subtree, then 
    // printing the data in the current node, then recursively calling 
    // inorderSubtree on the right subtree.
	void printSubtree(TreeNode *);


	void deallocate();    
 
    // Helper function for deallocate ( class destructor ). Used for recursive post-order traversal 
    // and deltion of a node and its children
	void deallocateSubtree(TreeNode *);

    // Optional helper function to allocate a node and set its fields
	TreeNode *createNode(ELEMTYPE);

    bool remove(TreeNode* ptr, ELEMTYPE elem);


public:
	// This initializes the root of the tree to nullptr
	AVL();
	
	// Perform a post-order traversal to delete all the nodes in the tree
	~AVL();


    // is the container empty  .. root node is set to nullptr;
    bool empty();



	// Insert the given value into the tree. If the root is currently nullptr , 
    // it will allocate a new node for the root and insert the given value there. 
    // Otherwise, it will use the helper function insertSubtree.
	bool insert(ELEMTYPE);



    // Search the tree for the value. Return a pointer to the node where the value 
    // was found or nullptr if the value was not found (or the tree is empty). 
	TreeNode *search(ELEMTYPE);


    // Perform an in-order traversal of the tree. This will print all of the tree's 
    // values in sorted order. 
	void print();


    // Delete the given value from the tree if it is in the tree. This must be
    // done iteratively so that the deletion routine can keep track of nodes
    // elsewhere in the tree.
	bool remove(ELEMTYPE);


    // Search the tree for the value DO NOT USE the searhSubTree functions
	// Return a pointer to the node where the value 
    // was found or nullptr if the value was not found (or the tree is empty). 
    TreeNode * iterativeSearch(ELEMTYPE);

friend void ToHTMLFile( AVL&,char const *);
};



  TreeNode *rightRotate(TreeNode *);
  TreeNode *leftRotate(TreeNode *);
  int height(TreeNode*);
















