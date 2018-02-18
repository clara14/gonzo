
#include "SLinkedList.h"

//-----------------------------------------------------

// Search for a given element

SListNode * SLinkedList::Search(ELEMTYPE elem)
  {
  //iterate through the list nodes
//when you find one that matches return the address
//
    LogStart(elem);
    SListNode* temp;
    temp = head;
    while(temp!=nullptr)
    {
        if(temp->data==elem)
        {  
            LogEndReturning(temp);
            return temp;
        }
        temp = temp->next;
    }
    LogEndReturning(temp);
    return temp;

  }


//-----------------------------------------------------

// Print the list

string SLinkedList::ToString()
  {
  // print out the head node
// iterate through the list of nodes
// print out the Address:  value stored and the next pointer of each node
// "Increment" to the next node in the list
    LogStart();
    ostringstream temp;
    SListNode* nodeptr;
    nodeptr=head;
    temp << "SLinkedList:\n";
    temp << "head: " << head << endl;
    while(nodeptr!=nullptr)
    {
        temp << "Node:\nAddress: " << nodeptr << " next: " << nodeptr->next 
             << " value: " << nodeptr->data << endl;
        nodeptr = nodeptr->next;
    }
    cout << endl;
    LogEndReturning(temp.str());
    return temp.str();

  }


