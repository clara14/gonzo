
#include "cmpslib.h"
struct LOGGER_DATA LGDATA;
#define ELEMTYPE string

#include "DLinkedList.h"
#include "print.h"

int main()
  {
  LoggerSetUpLog("main4.log");

  cout << "Creating DLinkedList of type string\n";
  DLinkedList<ELEMTYPE> list;
  cout << "list.ToString():\n" << list.ToString() << endl;

  cout << "Inserting five values, each at the front of the list\n";
  cout << "list.Insert('May'): " << boolalpha << list.Insert("May") << endl;
  cout << "list.Insert('almost'): " << boolalpha << list.Insert("almost") << endl;
  cout << "list.Insert('is'): " << boolalpha << list.Insert("is") << endl;
  cout << "list.Insert('it'): " << boolalpha << list.Insert("it") << endl;
  cout << "list.Insert('quickly'): " << boolalpha << list.Insert("quickly") << endl;

  cout << "list.ToString():\n" << list.ToString() << endl;

  cout << "Removing a couple of values using Remove()\n";
  cout << "list.Delete(list.Search('almost')): " << boolalpha << list.Delete(list.Search("almost")) << endl;
  cout << "list.Delete(list.Search('quickly')): " << boolalpha << list.Delete(list.Search("quickly")) << endl;

  cout << "list.ToString():\n" << list.ToString() << endl;
  cout << "list.ToStringReverse():\n" << list.ToStringReverse() << endl;

  cout << "Inserting three more values, each at the back of the list\n";
  cout << "list.Insert(and,list.ReverseSearch(May)): " << boolalpha << list.Insert("and",list.ReverseSearch("May")) << endl;
  cout << "list.Insert(almost,list.ReverseSearch(and)): " << boolalpha << list.Insert("almost",list.ReverseSearch("and")) << endl;
  cout << "list.Insert(summer,list.ReverseSearch(almost)): " << boolalpha << list.Insert("summer",list.ReverseSearch("almost")) << endl;

  cout << "list.ToString():\n" << list.ToString() << endl;

  cout << "Searching for values May and April using Search()\n" 
       << "Should find May, but not April\n";

  DListNode<ELEMTYPE>* temp = list.Search("May");
  if(temp == nullptr)
      cout << "value May NOT found\n";
  else
      cout << "value May found at address " << temp << endl;

  temp = list.Search("April");
  if(temp == nullptr)
      cout << "value April NOT found\n";
  else
      cout << "value April found at address " << temp << endl;
  
  cout << "list.ToString():\n" << list.ToString() << endl;

  cout << "calling Delete() 7 times to remove the 6 values of list\n" 
       << "this should only return true 6 times\n";
  cout << "list.Delete(list.Search(it)): " << boolalpha << list.Delete(list.Search("it")) << endl;
  cout << "list.Delete(list.Search(is)): " << boolalpha << list.Delete(list.Search("is")) << endl;
  cout << "list.Delete(list.Search(May)): " << boolalpha << list.Delete(list.Search("May")) << endl;
  cout << "list.Delete(list.Search(and)): " << boolalpha << list.Delete(list.Search("and")) << endl;
  cout << "list.Delete(list.Search(almost)): " << boolalpha << list.Delete(list.Search("almost")) << endl;
  cout << "list.Delete(list.Search(summer)): " << boolalpha << list.Delete(list.Search("summer")) << endl;
  cout << "list.Delete(list.Search(May)): " << boolalpha << list.Delete(list.Search("May")) << endl;  
  cout << "list.ToString():\n" << list.ToString() << endl;

  }



