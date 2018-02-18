#include "cmpslib.h"
struct LOGGER_DATA LGDATA; // create a global instance of this struct .. needed by logging library



#include "DynamicArray.h"


int main()
  {
  LoggerSetUpLog("main1.log");

  cout << "create DynamicArray objects arr, arr2, arr3, arr4\n";
  
  DynamicArray arr(5),arr2(5),arr3(5),arr4(5);

  cout << "set arr to contain some values\n";
  
  arr.SetValue("Manjula",0);
  arr.SetValue("Marge",1);
  arr.SetValue("Bart",2);
  arr.SetValue("Lisa",3);
  arr.SetValue("Maggie",4);

  cout << "\n\nPrint them all:\n"
       << "arr.ToString() returns\n"
       << arr.ToString() << endl
       << "arr2.ToString() returns\n"
       << arr2.ToString() << endl
       << "arr3.ToString() returns\n"
       << arr3.ToString() << endl
       << "arr4.ToString() returns\n"
       << arr4.ToString() << endl << endl;


  cout << "arr2 = arr ; // test assignment operator " << endl;

  arr2 = arr;

  cout << "arr3 = arr ; // test assignment operator " << endl;
  
  arr3 = arr;

  cout << "\n\nPrint them all:\n"
       << "arr.ToString() returns\n"
       << arr.ToString() << endl
       << "arr2.ToString() returns\n"
       << arr2.ToString() << endl
       << "arr3.ToString() returns\n"
       << arr3.ToString() << endl
       << "arr4.ToString() returns\n"
       << arr4.ToString() << endl;

  cout << "change some of the values in arr\n\n";
  arr.SetValue("Otto",0);
  arr.SetValue("Krusty",1);
  arr.SetValue("SuperNintendo Chalmers",2);
  arr.SetValue("Groundskeeper Willy",3);

  cout << "\n\nPrint them all:\n"
       << "arr.ToString() returns\n"
       << arr.ToString() << endl
       << "arr2.ToString() returns\n"
       << arr2.ToString() << endl
       << "arr3.ToString() returns\n"
       << arr3.ToString() << endl
       << "arr4.ToString() returns\n"
       << arr4.ToString() << endl;

  cout << "arr4 = arr + arr2; // test addition operator\n";
  arr4= arr + arr2;

  cout << "\n\nPrint them all:\n"
       << "arr.ToString() returns\n"
       << arr.ToString() << endl
       << "arr2.ToString() returns\n"
       << arr2.ToString() << endl
       << "arr3.ToString() returns\n"
       << arr3.ToString() << endl
       << "arr4.ToString() returns\n"
       << arr4.ToString() << endl;

  cout << "test the == operator\n";
  cout << "(arr == arr) evaluates to ";
       if(arr == arr)
           cout << "true\n";
       else
           cout << "false\n";
  
  cout << "(arr == arr2) evaluates to ";
       if(arr == arr2)
           cout << "true\n";
       else
           cout << "false\n";
 
  cout << "(arr == arr3) evaluates to ";
       if(arr == arr3)
           cout << "true\n";
       else
           cout << "false\n";

  cout << "(arr == arr4) evaluates to ";
       if(arr == arr4)
           cout << "true\n";
       else
           cout << "false\n";

  cout << "(arr2 == arr3) evaluates to ";
       if(arr2 == arr3)
           cout << "true\n";
       else
           cout << "false\n";

  cout << "\n(arr == arr) evaluates to ";
       if(arr == arr)
           cout << "true\n";
       else
           cout << "false\n";

  cout << "(arr2 == arr) evaluates to ";
       if(arr2 == arr)
           cout << "true\n";
       else
           cout << "false\n";

  cout << "(arr3 == arr) evaluates to ";
       if(arr3 == arr)
           cout << "true\n";
       else
           cout << "false\n";

  cout << "(arr4 == arr) evaluates to ";
       if(arr4 == arr)
           cout << "true\n";
       else
           cout << "false\n";

  cout << "(arr3 == arr2) evaluates to ";
       if(arr3 == arr2)
           cout << "true\n";
       else
           cout << "false\n";


  return 0;
  }

