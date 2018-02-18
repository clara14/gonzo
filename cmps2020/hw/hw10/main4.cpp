
#include "cmpslib.h"
struct LOGGER_DATA LGDATA;


#include "SLinkedList.h"


int main()
  {
  LoggerSetUpLog("main4.log");

  cout << "Creating SLinkedList of type string\n";
  SLinkedList list;
  cout << "list.ToString():\n" << list.ToString() << endl;

  cout << "Inserting four values, each at the front of the list\n";
  cout << "list.Insert(died): " << boolalpha << list.Insert("died") << endl;
  cout << "list.Insert(i just): " << boolalpha << list.Insert("i just") << endl;
  cout << "list.Insert(man): " << boolalpha << list.Insert("man") << endl;
  cout << "list.Insert(hey): " << boolalpha << list.Insert("hey") << endl;

  cout << "list.ToString():\n" << list.ToString() << endl;

  cout << "Removing a couple of values using Remove()\n";
  cout << "list.Remove(list.Search(died)): " << boolalpha << list.Remove(list.Search("died")) << endl;
  cout << "list.Remove(list.Search(i just)): " << boolalpha << list.Remove(list.Search("i just")) << endl;

  cout << "list.ToString():\n" << list.ToString() << endl;

  cout << "Inserting three more values, each at the back of the list\n";
  cout << "list.InsertBack(how): " << boolalpha << list.InsertBack("how") << endl;
  cout << "list.InsertBack(are): " << boolalpha << list.InsertBack("are") << endl;
  cout << "list.InsertBack(ya): " << boolalpha << list.InsertBack("ya") << endl;

  cout << "list.ToString():\n" << list.ToString() << endl;

  cout << "Inserting 'dude' in the node that contains 'man'\n";
  cout << "list.Insert(dude,list.Search(man)): " << boolalpha << list.Insert("dude",list.Search("man")) << endl;

  cout << "list.ToString():\n" << list.ToString() << endl;

  cout << "calling Remove() 6 times to remove the 5 values of list\n" 
       << "this should only return true 5 times\n";
  cout << "list.Remove(list.Search(hey)): " << boolalpha << list.Remove(list.Search("hey")) << endl;
  cout << "list.Remove(list.Search(dude)): " << boolalpha << list.Remove(list.Search("dude")) << endl;
  cout << "list.Remove(list.Search(how)): " << boolalpha << list.Remove(list.Search("how")) << endl;
  cout << "list.Remove(list.Search(are)): " << boolalpha << list.Remove(list.Search("are")) << endl;
  cout << "list.Remove(list.Search(ya)): " << boolalpha << list.Remove(list.Search("ya")) << endl;
  cout << "list.Remove(): " << boolalpha << list.Remove() << endl;

  cout << "list.ToString():\n" << list.ToString() << endl;

  }



