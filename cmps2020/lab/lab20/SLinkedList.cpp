
#include "SLinkedList.h"


SLinkedList::SLinkedList()
  {
    LogStart();
    head=nullptr;
    LogEnd();
  }


//-----------------------------------------------------

// Try to allocate a node

SListNode * SLinkedList::createNode(ELEMTYPE elem)
  {
    LogStart(elem);
    SListNode* temp;
    temp = new SListNode;
    temp->data=elem;
    temp->next=nullptr;
    LogEndReturning(temp);
    return temp; 
  }

//-----------------------------------------------------

bool SLinkedList::InList(SListNode* input)
  {
    LogStart(input);
    SListNode* temp;
    temp=head;
    bool status;
    while(temp!=nullptr)
    {
        if(temp==input)
            status=true;
        temp=temp->next;
    }
    LogEndReturning(status);
    return status;
  }
//-----------------------------------------------------

bool SLinkedList::InsertBack(ELEMTYPE input)
  {
    LogStart(input);
    bool status=false;
    SListNode* temp;
    temp=head;
    if(temp==nullptr)
    {
        head=createNode(input);
        status=true;
    }
    else
    {
        while(temp!=nullptr)
        {
            if(temp->next==nullptr)
            {
                temp->next=createNode(input);
                status=true;
                temp=nullptr;
            }
            else
                temp=temp->next;
            
        }
    }
    LogEndReturning(status);
    return status;
  }





//-----------------------------------------------------

// Attempt to insert an element

bool  SLinkedList::Insert(ELEMTYPE elem,SListNode *prev)
  {
    LogStart(elem,prev);
    bool status=false;
    SListNode* NewNode=createNode(elem);
    SListNode* temp;
    if(prev==nullptr)
    {
        temp=head;
        head=NewNode;
        NewNode->next=temp;
        status=true;
    }
    else
    {
        temp=head;
        while(temp!=nullptr)
        {
            if(temp==prev)
            {
                temp->data=elem;
                status=true;
            }
            temp=temp->next;
        }
    }
    LogEndReturning(status);        
    return status;

  }

//-----------------------------------------------------

// Search for and delete a given element

bool SLinkedList::Remove(SListNode * input)
  {
    LogStart(input);
    bool status=false;
    if(Empty())
        return status;
    SListNode* temp1;
    SListNode* prev;
    if(head==input)
    {
        temp1=head->next;
        delete head;
        head = temp1;
        status=true;
    }
    else
    {
        temp1=head;    
        while(temp1!=nullptr && temp1!=input)
        {
            prev=temp1;
            temp1=temp1->next;
        }
        if(temp1)
        {
            prev->next = temp1->next;
            delete temp1;
            status=true;
        }
    }
    LogEndReturning(status);
    return status;
  }

//-----------------------------------------------------

// Search for a given element

SListNode * SLinkedList::Search(ELEMTYPE elem)
  {
    LogStart(elem);
    SListNode* temp;
    temp=head;
    while(temp!=nullptr)
    {
        if(temp->data==elem)
        {
            LogEndReturning(temp);
            return temp;
        }
        temp=temp->next;
    }
    LogEndReturning(temp);
    return temp;
  }


//-----------------------------------------------------

// Print the list

string SLinkedList::ToString()
  {
    LogStart();
    ostringstream temp;
    SListNode* nodeptr;
    nodeptr=head;
    temp << "SLinkedList:\n";
    temp << "head: " << head << endl;
    while(nodeptr!=nullptr)
    {
        temp << "Node:\nAddress: " << nodeptr << " next: " << nodeptr->next
             << " value: " << nodeptr->data << endl;;
        nodeptr=nodeptr->next;
    }
    cout << endl;
    LogEndReturning(temp.str());
    return temp.str();
  }

//------------------------------------------------------

// Deallocate the list

SLinkedList::~SLinkedList()
  {
      LogStart();
      SListNode* temp;
      SListNode* temp2;
      temp=head;
      while(temp!=nullptr)
      {
          temp2 = temp->next;
          delete temp;
          temp = temp2;
      }
      LogEnd();    
  }

//------------------------------------------------------

bool SLinkedList::Empty()
  {

  LogStart();
  LogEndReturning(nullptr == head );
  return  (nullptr == head );
  }


