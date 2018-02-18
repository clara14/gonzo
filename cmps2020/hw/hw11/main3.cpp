
#include "cmpslib.h"
struct LOGGER_DATA LGDATA;
#define ELEMTYPE int

#include "DLinkedList.h"
#include "print.h"

int main()
  {
  LoggerSetUpLog("main3.log");

  cout << "Creating DLinkedList of type int\n";
  DLinkedList<ELEMTYPE> list;
  cout << "list.ToString():\n" << list.ToString() << endl;

  cout << "Inserting five values, each at the front of the list\n";
  cout << "list.Insert(5): " << boolalpha << list.Insert(5) << endl;
  cout << "list.Insert(3): " << boolalpha << list.Insert(3) << endl;
  cout << "list.Insert(2): " << boolalpha << list.Insert(2) << endl;
  cout << "list.Insert(1): " << boolalpha << list.Insert(1) << endl;
  cout << "list.Insert(99): " << boolalpha << list.Insert(99) << endl;

  cout << "list.ToString():\n" << list.ToString() << endl;

  cout << "Removing a couple of values using Remove()\n";
  cout << "list.Delete(list.Search(2)): " << boolalpha << list.Delete(list.Search(2)) << endl;
  cout << "list.Delete(list.Search(3)): " << boolalpha << list.Delete(list.Search(3)) << endl;

  cout << "list.ToString():\n" << list.ToString() << endl;
  cout << "list.ToStringReverse():\n" << list.ToStringReverse() << endl;

  cout << "Inserting three more values, each at the back of the list\n";
  cout << "list.Insert(6,list.ReverseSearch(5)): " << boolalpha << list.Insert(6,list.ReverseSearch(5)) << endl;
  cout << "list.Insert(8,list.ReverseSearch(6)): " << boolalpha << list.Insert(8,list.ReverseSearch(6)) << endl;
  cout << "list.Insert(9,list.ReverseSearch(8)): " << boolalpha << list.Insert(9,list.ReverseSearch(8)) << endl;

  cout << "list.ToString():\n" << list.ToString() << endl;

  cout << "Searching for values 99 and 100 using Search()\n" 
       << "Should find 99, but not 100\n";

  DListNode<ELEMTYPE>* temp = list.Search(99);
  if(temp == nullptr)
      cout << "value 99 NOT found\n";
  else
      cout << "value 99 found at address " << temp << endl;

  temp = list.Search(100);
  if(temp == nullptr)
      cout << "value 100 NOT found\n";
  else
      cout << "value 100 found at address " << temp << endl;
  
  cout << "list.ToString():\n" << list.ToString() << endl;

  cout << "calling Delete() 7 times to remove the 6 values of list\n" 
       << "this should only return true 5 times\n";
  cout << "list.Delete(list.Search(99)): " << boolalpha << list.Delete(list.Search(99)) << endl;
  cout << "list.Delete(list.Search(1)): " << boolalpha << list.Delete(list.Search(1)) << endl;
  cout << "list.Delete(list.Search(5)): " << boolalpha << list.Delete(list.Search(5)) << endl;
  cout << "list.Delete(list.Search(6)): " << boolalpha << list.Delete(list.Search(6)) << endl;
  cout << "list.Delete(list.Search(8)): " << boolalpha << list.Delete(list.Search(8)) << endl;
  cout << "list.Delete(list.Search(9)): " << boolalpha << list.Delete(list.Search(9)) << endl;
  cout << "list.Delete(list.Search(6)): " << boolalpha << list.Delete(list.Search(6)) << endl;  
  cout << "list.ToString():\n" << list.ToString() << endl;

  }



