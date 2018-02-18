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
    bool Insert(ELEMTYPE, SListNode * = nullptr);// param 2 defauts to nullptr if no value given insert at head

    bool Delete(SListNode * = nullptr);// param 2 defaults to nullptr if no vaue given delete from head

    bool InsertBack(ELEMTYPE);// add to the end

    SListNode * Search(ELEMTYPE );
    string ToString();
    bool Empty();
    bool InList(SListNode*);
    friend void ToHTMLFile(SLinkedList& ,int,char const * );

  };





