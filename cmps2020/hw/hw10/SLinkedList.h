#pragma once
#include "cmpslib.h"


#ifndef ELEMTYPE
#define ELEMTYPE int
#endif

// Define the list node structure. It contains the element and a pointer to

// the next and previous nodes in the list.

struct SListNode
  {
  ELEMTYPE data;
  SListNode *next;

  };


class SLinkedList
  {
  private:
    SListNode * head;
    SListNode * createNode(ELEMTYPE);

  public:
    SLinkedList();
    ~SLinkedList();
    // param 1 the value to insert, param2 a pointer to one of the nodes in the list, if this is nullptr insert at front, if not it is 

	// the node you will want to insert after bool 

	// param 2 defauts to nullptr if no value given 

	bool Insert(ELEMTYPE, SListNode * = nullptr);
    bool Remove(SListNode * = nullptr);// param 2 defaults to nullptr if no vaue given delete from head

    // param 1 the value to insert , insert at the bck of the List

	bool InsertBack(ELEMTYPE);// add to the end

    // param 1 the value to search for

	// returns a vlid pointer to one of the nodes in the list, nullptr if not found

	 SListNode * Search(ELEMTYPE );
    // create a string representation of the List and all the values in it

	// make it match the example EXACTLY

	string ToString();
    bool Empty();
    // param1  SListNode * 

	// iterate throught the list and return true if this is inded one of the Nodes in this list false if not

	bool InList(SListNode*);
    // this has been done for you, it is in print.h , it will make a diagram of yor List and values

	friend void ToHTMLFile(SLinkedList& ,char const * );

  };





