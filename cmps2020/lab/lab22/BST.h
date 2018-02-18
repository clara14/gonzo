#pragma once
#include "cmpslib.h"





template <class T>
struct TreeNode
  {
  T data;    // The element being stored

  TreeNode<T> *left;   // The address of the left subtree

  TreeNode<T> *right;  // The address of the right subtree

  };




template <class T>
class BST
  {
  private:
    TreeNode<T> *root; // The address of the root node




    // Helper function for insert. It will see if the value belongs in the left or

    // right subtree. If the correct subtree is currently nullptr , it will allocate a

    // new node and insert it there. Otherwise, it will recursively call

    // insertSubtree on that subtree.

    bool insertSubtree(TreeNode<T> *, T);

    // Helper function for search. Performs the BST search on the given subtree

    // root node. It uses recursion to traverse the proper search path for the

    // given value.

    TreeNode<T> *searchSubtree(TreeNode<T> *, T);

    // Helper function for in-order print traversal. Performs an in-order print

    // traversal by recursively calling inorderSubtree on the left subtree, then

    // printing the data in the current node, then recursively calling

    // inorderSubtree on the right subtree.

    void printSubtree(TreeNode<T> *);


    void deallocate();

    // Helper function for deallocate ( class destructor ). Used for recursive post-order traversal

    // and deltion of a node and its children

    void deallocateSubtree(TreeNode<T> *);

    // Optional helper function to allocate a node and set its fields

    TreeNode<T> *createNode(T);

    bool remove(TreeNode<T>* ptr, T elem);


  public:
    // This initializes the root of the tree to nullptr

    BST();

    // Perform a post-order traversal to delete all the nodes in the tree

    ~BST();


    // is the container empty  .. root node is set to nullptr;

    bool empty();



    // Insert the given value into the tree. If the root is currently nullptr ,

    // it will allocate a new node for the root and insert the given value there.

    // Otherwise, it will use the helper function insertSubtree.

    bool insert(T);



    // Search the tree for the value. Return a pointer to the node where the value

    // was found or nullptr if the value was not found (or the tree is empty).

    TreeNode<T> *search(T);


    // Perform an in-order traversal of the tree. This will print all of the tree's

    // values in sorted order.

    void print();


    // Delete the given value from the tree if it is in the tree. This must be

    // done iteratively so that the deletion routine can keep track of nodes

    // elsewhere in the tree.

    bool remove(T);


    // Search the tree for the value DO NOT USE the searhSubTree functions

    // Return a pointer to the node where the value

    // was found or nullptr if the value was not found (or the tree is empty).

    TreeNode<T> * iterativeSearch(T);

    template <class T2>
    friend void ToHTMLFile( BST<T2> &,char const *);
  };




template <class T>
BST<T>::BST()
  {
    LogStart();
    root = nullptr;
    LogEnd();
  }

template <class T>
BST<T>::~BST()
  {
  // call deallocate to clean up the all the nodes

  }

template <class T>
void BST<T>::deallocate()
  {
  // if the root node pointer is not nullptr call dealocate subtree
// and pass in the root node pointer

  }

template <class T>
void BST<T>::deallocateSubtree(TreeNode<T> *subtree)
  {
  // Deallocate any children subtrees first
// dealocate this node

  }

template <class T>
TreeNode<T>* BST<T>::createNode(T elem)
  {
    LogStart();
    TreeNode<T>* temp = new TreeNode<T>;
    temp->left = nullptr;
    temp->right =nullptr;
    temp->data = elem;
    LogEndReturning(temp);
    return temp;

  }

template <class T>
bool BST<T>::insert(T elem)
  {

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

template <class T>
bool BST<T>::insertSubtree(TreeNode<T> *subtree, T elem)
  {
    LogStart(subtree,elem);
    bool status;
    if(subtree->data==elem)
    {
      status=false;
    }
    if(elem>subtree->data)
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
    if(elem<subtree->data)
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


template <class T>
TreeNode<T>* BST<T>::search(T elem)
  {
  // if BST is empty throw "Binary Search Tree Empty, search not allowed"
// otherwise call searchSubtree

  }

template <class T>
TreeNode<T>* BST<T>::searchSubtree(TreeNode<T> *subtree, T elem)
  {
  // if the current node contains the value you are looking for return the pointer to it
// other wise if he value we are looking for is greater than the value in the current node
// search the left side .. other wise search the right side

  }

template <class T>
void BST<T>::print()
  {
  // if the root node is not nullptr
//call printSubtree

  }

template <class T>
void BST<T>::printSubtree(TreeNode<T> *subtree)
  {
  // if the left node pointer is not nullptr call printSubtree on left
// print the values from this node
// if the right node pointer is not nullptr call printSubtree on right

  }
template <class T>
bool BST<T>::remove(T elem)
  {
  return remove(root,elem);
  }


template <class T>
bool BST<T>::remove(TreeNode<T>* ptr, T elem)
  {
  LogStart(elem);
  TreeNode<T>* parent = ptr;      // parent of node to delete



  /*
  Try to find the element in the tree
  keep moving down the tree to we reach a nullptr pointer or find the value
  use two pointers as you must have a pointer to the parrent Node of the one you
  need to delete in order to proceed
    */

  while (true)
    {
    if (ptr == nullptr)
      {
      // bottom of the tree  and we did not find it

      LogEndReturning(false);
      return(false);
      }

    if (ptr->data == elem)
      {
      break;  // found it stop while loop

      }

    if (elem < ptr->data)
      {
      // the value we are looking for is less so go left

      parent = ptr;
      ptr = ptr->left;
      }
    else
      {
      // the value we are looking for is more so go right

      parent = ptr;
      ptr = ptr->right;
      }
    }


  // at this point ptr should point to the node we want to delete

  // and parent should point to the node above it (if if is not the root node)


  /* there are really 3 possible scenarios
     1 the node we want to delete has no chilren , easy
     2 the node we wnat to delte has 1 child , not bad
     3 the node we wand to delete has 2 children, most involved */

  // case 1 , no children

  if (ptr->right == nullptr && ptr->left == nullptr)
    {
    LogLow("Case 1 , no child nodes\n");
    // set the ponter in parrent that curently points to the node we want to delete to nullptr

    if(parent->right==ptr)
      {
      parent->right=nullptr;
      }
    else
      {
      parent->left=nullptr;
      }



    LogLow("deleting a node containing %s",ptr->data);


    if (ptr == root )
      {
      root = nullptr;
      }
    delete ptr;
    LogEndReturning(true);
    return true;
    } // end case 1


  // case 2 , one child node

  if ( ptr->right == nullptr || ptr->left == nullptr) // one is null so there is only one child node

    {
    LogLow("Case 2 , one child node\n");
    // set the pointer in the parrent of ptr to point to the child of ptr, so we can delete the node tmp

    ((parent->right == ptr) ? parent->right : parent->left ) =  ( (ptr->right != nullptr) ?  ptr->right: ptr->left);

    // if ptr is the root node we better update the pointer root so it isnt still pointing the node we are going to delete

    if  (root == ptr)
      {
      root  =  ( (ptr->right != nullptr) ?  ptr->right: ptr->left);
      }

    LogLow("deleting a node containing %s",ptr->data);
    delete ptr;
    LogEndReturning(true);
    return true;

    } // endl case 2




  // case 3 is all that is left

  // Two children to this node, need to find replacement node using either

  // inorder successor or inorder predecessor.


  // Inorder precessor is the largest value in the left subtree

  TreeNode<T>* replacement = ptr->left;
  while(replacement->right)
    {
    replacement = replacement->right;
    }

  // copy the data up to the node we were originally wanting to delete

  T temp = replacement->data;
  LogLow("Calling remove for a node with a value of %s but we are atually going to put the value %s into the node that use to have the value %s",temp, temp,ptr->data);
  remove(ptr,temp);
  ptr->data = temp;
  LogEndReturning(true);
  return true;
  }




template <class T>
bool BST<T>::empty()
  {
  
  }


template <class T>
TreeNode<T> * BST<T>::iterativeSearch(T input)
  {
  // if the BST is empty    throw "Binary Search Tree empty, search not allowed";
// create a temp TreeNode<T> * , set it to the root
// while it is not a leaf or the value you are searching for
// incrment it to either the right or left node depanding on
// wether the value you are searching for is < or > the value
// are searching for

  }




