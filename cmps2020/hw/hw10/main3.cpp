
#include "cmpslib.h"
struct LOGGER_DATA LGDATA;


#include "SLinkedList.h"


int main()
  {
  LoggerSetUpLog("main3.log");

  cout << "Creating SLinkedList of type int\n";
  SLinkedList list;
  cout << "list.ToString():\n" << list.ToString() << endl;

  cout << "Inserting four values, each at the front of the list\n";
  cout << "list.Insert(5): " << boolalpha << list.Insert(5) << endl;
  cout << "list.Insert(3): " << boolalpha << list.Insert(3) << endl;
  cout << "list.Insert(2): " << boolalpha << list.Insert(2) << endl;
  cout << "list.Insert(1): " << boolalpha << list.Insert(1) << endl;

  cout << "list.ToString():\n" << list.ToString() << endl;

  cout << "Removing a couple of values using Remove()\n";
  cout << "list.Remove(list.Search(2)): " << boolalpha << list.Remove(list.Search(2)) << endl;
  cout << "list.Remove(list.Search(3)): " << boolalpha << list.Remove(list.Search(3)) << endl;

  cout << "list.ToString():\n" << list.ToString() << endl;

  cout << "Inserting three more values, each at the back of the list\n";
  cout << "list.InsertBack(6): " << boolalpha << list.InsertBack(6) << endl;
  cout << "list.InsertBack(8): " << boolalpha << list.InsertBack(8) << endl;
  cout << "list.InsertBack(9): " << boolalpha << list.InsertBack(9) << endl;

  cout << "list.ToString():\n" << list.ToString() << endl;

  cout << "Inserting 99 in the node that contains 5\n";
  cout << "list.Insert(99,list.Search(5)): " << boolalpha << list.Insert(99,list.Search(5)) << endl;

  cout << "list.ToString():\n" << list.ToString() << endl;

  cout << "calling Remove() 6 times to remove the 5 values of list\n" 
       << "this should only return true 5 times\n";
  cout << "list.Remove(list.Search(9)): " << boolalpha << list.Remove(list.Search(9)) << endl;
  cout << "list.Remove(list.Search(8)): " << boolalpha << list.Remove(list.Search(8)) << endl;
  cout << "list.Remove(list.Search(6)): " << boolalpha << list.Remove(list.Search(6)) << endl;
  cout << "list.Remove(list.Search(99)): " << boolalpha << list.Remove(list.Search(99)) << endl;
  cout << "list.Remove(list.Search(1)): " << boolalpha << list.Remove(list.Search(1)) << endl;
  cout << "list.Remove(): " << boolalpha << list.Remove() << endl;

  cout << "list.ToString():\n" << list.ToString() << endl;

  }



