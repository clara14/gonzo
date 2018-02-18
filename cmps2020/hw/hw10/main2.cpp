

#include "cmpslib.h"
struct LOGGER_DATA LGDATA; // create a global instance of this struct .. needed by logging library



#include "SLinkedList.h"
#include "print.h"
void PrintMenu()
{
cout << "*********************************************" << endl;
cout << "*                                           *" << endl;
cout << "*                                           *" << endl;
cout << "*                                           *" << endl;
cout << "*                                           *" << endl;
cout << "*                                           *" << endl;
cout << "*                                           *" << endl;
cout << "*                                           *" << endl;
cout << "*                                           *" << endl;
cout << "*                                           *" << endl;
cout << "*                                           *" << endl;
cout << "*********************************************" << endl;
}

int main()
  {
  LoggerSetUpLog("main.log");

  SLinkedList list1;

  LISTELEM temp;
int choice ;
 temp = Prompt("Enter Value:");
 
  cout << list1.ToString() << endl;

  ToHTMLFile(list1,"llist.html");

  return 0;
  }
