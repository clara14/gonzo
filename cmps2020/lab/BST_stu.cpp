#include "BST.h"

BST::BST()
{
    LogStart();
    root = nullptr;
    LogEnd();
}

TreeNode* BST::createNode(ELEMTYPE elem)
{
	// set the fields in the node
// store the parameter value in the node
// set both pointers to nullptr
    LogStart();
    TreeNode* temp = new TreeNode;
    temp->left = nullptr;
    temp->right =nullptr;
    temp->data = elem;
    LogEndReturning(temp);
    return temp;
}

bool BST::insert(ELEMTYPE elem)
{

	// if the root node pointer is nullptr then that is where 
// you want to put the first node there
// otherwise call insertSubtree and pass the root node
    LogStart(elem);
    bool status;
    if(root==nullptr)
    {
        root = createNode(elem);
        status = true;
    }
    else
    {
        status = insertSubtree(root,elem);
    }
    LogEndReturning(status);
    return status;
}

bool BST::insertSubtree(TreeNode *subtree, ELEMTYPE elem)
{
	// if this node already has the value in it that we want to store 
// return false
// if the value to insert is greater than the value in the current node
// go down the right side.. if the right pointer is nullptr add 
// the new node there, if its not nullptr then call insertSubtree 
// with the right pointer
// if the value to insert is less than the value in the current node
// use the same logic for the left side
    LogStart(subtree,elem);
    bool status;
    if(subtree->data==elem)
    {  
        status = false;
    }
    if(elem > subtree->data)
    {
        if(subtree->right==nullptr)
        {
            subtree->right=createNode(elem);
            status = true;
        }
        else
        {
            status = insertSubtree(subtree->right,elem);
        }
    }
    if(elem < subtree->data)
    {
        if(subtree->left==nullptr)
        {
            subtree->left=createNode(elem);
            status = true;
        }
        else
        {
            status = insertSubtree(subtree->left,elem);
        }
    }
    LogEndReturning(status);
    return status;

}


