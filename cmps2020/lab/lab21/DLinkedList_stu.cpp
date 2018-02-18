
#include "DLinkedList.h"


//-----------------------------------------------------

// Search for a given element

DListNode * DLinkedList::listSearch(LISTELEM elem)
  {
  // start with a temp Node * and set it to the first node..... head->next
// Search for the node .. while your not at the tail node move forward
// if you find the value your looking for return a pointer to it
// if you cant find it return nullptr
    LogStart(elem);
    DListNode* temp;
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

DListNode * DLinkedList::listReverseSearch(LISTELEM elem)
  {
  // start with a temp Node * and set it to the last node..... tail->prev
// Search for the node .. while your not at the head node move backward
// if you find the value your looking for return a pointer to it
    LogStart(elem);
    DListNode* temp;
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

string DLinkedList::ToString()
  {
  // "Increment" to the next node in the list
    LogStart();
    ostringstream os;
    DListNode* temp;
    temp=head->next;
    os << "DLinkedList:\n"
       << "head: " << head << endl
       << "tail: " << tail << endl;
    while(temp!=tail)
    {
        os << "DListNode:\n"
           << "prev: " << temp->prev 
           << " next: " << temp->next
           << " value: " << temp->data << endl;
        temp = temp->next;
    }
    LogEndReturning(os.str());
    return os.str();

  }


