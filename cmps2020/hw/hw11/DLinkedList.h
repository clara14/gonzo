#pragma once
#include "cmpslib.h"



// Define the list node structure. It contains the element and a pointer to

// the next and previous nodes in the list.

template <class T>
struct DListNode
  {
  T data;
  DListNode<T> *next;
  DListNode<T> *prev;
  };


template <class T>
class DLinkedList
  {
  private:
    DListNode<T> * head;
    DListNode<T> * tail;
    DListNode<T> * createNode(T);
  public:
    DLinkedList();
    ~DLinkedList();
    bool Insert(T, DListNode<T> * = nullptr);
    bool Delete(DListNode<T> *);
    DListNode<T> * Search(T );
    DListNode<T> * ReverseSearch(T );
    string ToString();
    string ToStringReverse();
    bool empty();

    template <class T2>
    friend void ToHTMLFile(DLinkedList<T2> & ,char const * );


  };





#include "DLinkedList.h"


template <class T>
DLinkedList<T>::DLinkedList()
  {
  // you will want to create two dummy nodes
// set the pointers head and tail to point to new nodes
// set the next pointer of the head to point to the tail node
// set the prev pointer of the head to point to nullptr
// set the next pointer of the tail to point to nullptr
// set the prev pointer of the tail to point to the head node
    LogStart();
    head = new DListNode<T>;
    tail = new DListNode<T>;
    head->next = tail;
    head->prev = nullptr;
    tail->next = nullptr;
    tail->prev = head;
    LogEnd();
  }


//-----------------------------------------------------

// Try to allocate a node

template <class T>
DListNode<T> * DLinkedList<T>::createNode(T elem)
  {
  // create  a new node

// set the prev and next pointers in the node to nullptr
// store the value passed into the function into the node
    LogStart(elem);
    DListNode<T>* temp = new DListNode<T>;
    temp->prev = nullptr;
    temp->next = nullptr;
    temp->data = elem;
    LogEndReturning(temp);
    return temp;

  }



//-----------------------------------------------------

// Attempt to insert an element

template <class T>
bool  DLinkedList<T>::Insert(T elem,DListNode<T> *prev)
  {
  // if the second parameter prev is nullptr set it to the pointer head
    if(prev==nullptr)
        prev = head;
// if  prev != head
// you will need to search for the node that has an address that matches
// the pointer prev
// create a DListNode<T> * temp
// set temp to the head
// create a bool var flag ,set it to false
// while temp->next != prev  step through    temp = temp->next
    bool flag=false;
    if(prev!=head)
    {
        DListNode<T>* temp = head;
        while(temp!=prev)
        {
            if(temp->next==prev)
            {
                flag=true;
                break;
            }
            else
            {
                temp = temp->next;
            }
       }
       if(flag==false)
           return false;
    }
    
    DListNode<T>* ptr;
    ptr = createNode(elem);
    ptr->prev = prev;
    ptr->next = prev->next;
    ptr->next->prev = ptr;
    prev->next = ptr;
    LogEndReturning(true);
    return true;
// if temp == prev	 set flag = true and break from the loop

//
// after loop is complete
// Check if we did not find prev , this is what flag is for
// if not return

// create a DListNode<T>*
// Try to allocate a node with createNode function

// if Allocation failed, return

// temp should no be pointing to the node we want to

// Update the new node to point to the node before it and after it

// Now prev and next need to be updated to point to the new node


  }

//-----------------------------------------------------

// Search for and delete a given element

template <class T>
bool DLinkedList<T>::Delete(DListNode<T> * input)
  {
  // Check for empty list  or if the pointer is nullptr, if so just return out of function, nothing to do

// Now we can delete the node
    LogStart(input);
    bool status = false;
    if(empty() || input==nullptr)
    {
        LogEndReturning(status);
        return status;
    }
    DListNode<T>* tmp = input;
    tmp->prev->next = tmp->next;
    tmp->next->prev = tmp->prev;
    delete tmp;
    status = true;
    LogEndReturning(status);
    return status;
  }

//-----------------------------------------------------

// Search for a given element

template <class T>
DListNode<T> * DLinkedList<T>::Search(T elem)
  {
    LogStart(elem);
    DListNode<T>* temp;
    temp = head->next;
    while(temp!=tail)
    {
        if(temp->data==elem)
        {
            LogEndReturning(temp);
            return temp;
        }
        else
        {
            temp = temp->next;
        }
    }
    LogEndReturning(nullptr);
    return nullptr;

  }

// Search backwards for a given element

template <class T>
DListNode<T> * DLinkedList<T>::ReverseSearch(T elem)
  {
  // start with a temp Node * and set it to the last node..... tail->prev
// Search for the node .. while your not at the head node move backward

// if you find the value your looking for return a pointer to it
    LogStart(elem);
    DListNode<T>* temp;
    temp = tail->prev;
    while(temp!=head)
    {
        if(temp->data==elem)
        {
            LogEndReturning(temp);
            return temp;
        }
        else
        {
            temp = temp->prev;
        }
    }
    LogEndReturning(nullptr);
    return nullptr;

  }

//-----------------------------------------------------

// Print the list

template <class T>
string DLinkedList<T>::ToString()
  {
  LogStart();
  ostringstream tmp;
  tmp << "DLinkedList:\n"
      << "head: " << head << endl
      << "tail: " << tail << endl;
  DListNode<T> *ptr = head->next;

  while(ptr != tail)
    {
    tmp << "DListNode<T>:\naddress: " << ptr << " prev: " << ptr->prev << " next: " << ptr->next << " value: " << ptr->data << endl;
    ptr = ptr->next; // "Increment" to the next node in the list

    }
  tmp << endl;
  LogEndReturning(tmp.str());
  return(tmp.str());
  }

// Print the list in reverse

template <class T>
string DLinkedList<T>::ToStringReverse()
  {
  // use same logic as ToString just traverse the List back to front
    LogStart();
    ostringstream tmp;
    tmp << "DLinkedList:\n"
        << "head: " << head << endl
        << "tail: " << tail << endl;
    DListNode<T> *ptr = tail->prev;
    while(ptr!=head)
    {
        tmp << "DListNode<T>:\naddress: " << ptr << " prev: " << ptr->prev << " next: " << ptr->next << " value: " << ptr->data << endl;
        ptr = ptr->prev;
    }
    tmp << endl;
    LogEndReturning(tmp.str());
    return tmp.str();
  }

// Deallocate the list

template <class T>
DLinkedList<T>::~DLinkedList()
  {
  // use a couple of  Node poitners to traverse the list
// delete a node after to have a pointer to the next one in the list
// be sure the head and tail nodes get delted too
    LogStart();
    DListNode<T>* temp1;
    DListNode<T>* temp2;
    temp1 = head->next;
    while(temp1!=tail)
    {
        temp2 = temp1->next;
        delete temp1;
        temp1 =temp2;
    }
    delete head;
    delete tail;
    LogEnd();
  }

template <class T>
bool DLinkedList<T>::empty()
  {
  LogStart();
  bool result = (nullptr == head);

  LogEndReturning(result);
  return(result);
  }




