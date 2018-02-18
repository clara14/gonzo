#pragma once
#include "cmpslib.h"


#ifndef LISTELEM
#define LISTELEM int
#endif

// Define the list node structure. It contains the element and a pointer to

// the next and previous nodes in the list.

struct DListNode
  {
  LISTELEM data;
  DListNode *next;
  DListNode *prev;
  };


class DLinkedList
  {
  private:
    DListNode * head;
    DListNode * tail;
    DListNode * createNode(LISTELEM);
  public:
    DLinkedList();
    ~DLinkedList();
    bool listInsert(LISTELEM, DListNode * = nullptr);
    bool listDelete(DListNode *);
    DListNode * listSearch(LISTELEM );
    DListNode * listReverseSearch(LISTELEM );
    string ToString();
    string ToStringReverse();
    bool empty();
    friend void ToHTMLFile(DLinkedList& ,char const * );


  };




