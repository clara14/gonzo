#include "cmpslib.h"
struct LOGGER_DATA LGDATA;

#include "template_functions.h"

int main()
  {
  LoggerSetUpLog("main.log");
  cout  << "Testing with type int"  << endl;

  cout  << " GetLarger( 2,3)  returns "  << GetLarger( 2,3) << endl;
  cout  << " GetLarger( 3,2)  returns "  << GetLarger( 3,2) << endl<< endl;

  cout  << " GetSmaller(2,3)  returns "  << GetSmaller( 2,3) << endl;
  cout  << " GetSmaller( 3,2)  returns "  << GetSmaller( 3,2) << endl<< endl;

  cout  << " GetLarger( 1,2,3)  returns "  << GetLarger( 1,2,3) << endl;
  cout  << " GetLarger( 2,3,1)  returns "  << GetLarger( 2,3,1) << endl;
  cout  << " GetLarger( 3,2,1)  returns "  << GetLarger( 3,2,1) << endl<< endl;

  cout  << " GetSmaller( 1,2,3)  returns "  << GetSmaller( 1,2,3) << endl;
  cout  << " GetSmaller( 2,3,1)  returns "  << GetSmaller( 2,3,1) << endl;
  cout  << " GetSmaller( 3,2,1)  returns "  << GetSmaller( 3,2,1) << endl<< endl;


  LogLow("\n\n\nTesting with type double");
  cout  << "Testing with type double"  << endl;

  cout  << " GetLarger( 2.2,3.3)  returns "  << GetLarger( 2.2,3.3) << endl;
  cout  << " GetLarger( 3.3,2.2)  returns "  << GetLarger( 3.3,2.2) << endl<< endl;

  cout  << " GetSmaller(2.2,3.3)  returns "  << GetSmaller( 2.2,3.3) << endl;
  cout  << " GetSmaller( 3.3,2.2)  returns "  << GetSmaller( 3.3,2.2) << endl<< endl;

  cout  << " GetLarger( 1.1,2.2,3.3)  returns "  << GetLarger( 1.1,2.2,3.3) << endl;
  cout  << " GetLarger( 2.2,3.3,1.1)  returns "  << GetLarger( 2.2,3.3,1.1) << endl;
  cout  << " GetLarger( 3.3,2.2,1.1)  returns "  << GetLarger( 3.3,2.2,1.1) << endl<< endl;

  cout  << " GetSmaller( 1.1,2.2,3.3)  returns "  << GetSmaller( 1.1,2.2,3.3) << endl;
  cout  << " GetSmaller( 2.2,3.3,1.1)  returns "  << GetSmaller( 2.2,3.3,1.1) << endl;
  cout  << " GetSmaller( 3.3,2.2,1.1)  returns "  << GetSmaller( 3.3,2.2,1.1) << endl<< endl;


  LogLow("\n\n\nTesting with type char");
  cout  << "Testing with type char"  << endl;

  cout  << " GetSmaller('a','b','c')  returns "  << GetSmaller('a','b','c') << endl;
  cout  << " GetSmaller('b','c','a')  returns "  << GetSmaller('b','c','a') << endl;
  cout  << " GetSmaller('c','a','b')  returns "  << GetSmaller('c','a','b') << endl<< endl;


  LogLow("\n\n\nTesting with type char *");
  cout  << "Testing with type char *"  << endl;

  cout  << " GetLarger( \"monkey\",\"zebra\")  returns "  << GetLarger( "monkey","zebra") << endl;
  cout  << " GetLarger( \"zebra\",\"monkey\")  returns "  << GetLarger( "zebra","monkey") << endl<< endl;

  cout  << " GetSmaller(\"monkey\",\"zebra\")  returns "  << GetSmaller( "monkey","zebra") << endl;
  cout  << " GetSmaller( \"zebra\",\"monkey\")  returns "  << GetSmaller( "zebra","monkey") << endl<< endl;

  cout  << " GetLarger( \"capybara\",\"monkey\",\"zebra\")  returns "  << GetLarger( "capybara","monkey","zebra") << endl;
  cout  << " GetLarger( \"monkey\",\"zebra\",\"capybara\")  returns "  << GetLarger( "monkey","zebra","capybara") << endl;
  cout  << " GetLarger( \"zebra\",\"monkey\",\"capybara\")  returns "  << GetLarger( "zebra","monkey","capybara") << endl<< endl;

  cout  << " GetSmaller( \"capybara\",\"monkey\",\"zebra\")  returns "  << GetSmaller( "capybara","monkey","zebra") << endl;
  cout  << " GetSmaller( \"monkey\",\"zebra\",\"capybara\")  returns "  << GetSmaller( "monkey","zebra","capybara") << endl;
  cout  << " GetSmaller( \"zebra\",\"monkey\",\"capybara\")  returns "  << GetSmaller( "zebra","monkey","capybara") << endl<< endl;



  LogLow("\n\n\nTest the array functions");

  cout  << "Test the array functions"  << endl;
  cout  << "create an int array"  << endl;

  int intarray[] = {1,2,3,4,5,6,77,88,99};

  cout  << "Print the array"  << endl;
  PrintArray(intarray , 9);

  cout  << "Call SortArrayDecending "  << endl;
  SortArrayDecending(intarray,9);

  cout  << "Print the array"  << endl;
  PrintArray(intarray , 9);

  cout  << "Call SortArrayAccending "  << endl;
  SortArrayAccending(intarray,9);

  cout  << "Print the array"  << endl;
  PrintArray(intarray , 9);








  LogLow("create an char array");
  cout  << "create an char array"  <<  endl;

  char chararray[] = {'a','g','c','z','b','n','w','j'};

  cout  << "Print the array"  << endl;
  PrintArray(chararray , 8);

  cout  << "Call SortArrayDecending "  << endl;
  SortArrayDecending(chararray,8);

  cout  << "Print the array"  << endl;
  PrintArray(chararray , 8);

  cout  << "Call SortArrayAccending "  << endl;
  SortArrayAccending(chararray,8);

  cout  << "Print the array"  << endl;
  PrintArray(chararray , 8);



  LogLow("\n\n\ncreate an string array");
  cout  << "create an string array"  <<  endl;

  string stringarray[] = {"Bert","Ernie","Oscar","Big Bird","Count","Cookie Monster", "Grover","Snufflaupagus"};

  cout  << "Print the array"  << endl;
  PrintArray(stringarray , 8);

  cout  << "Call SortArrayDecending "  << endl;
  SortArrayDecending(stringarray,8);

  cout  << "Print the array"  << endl;
  PrintArray(stringarray , 8);

  cout  << "Call SortArrayAccending "  << endl;
  SortArrayAccending(stringarray,8);

  cout  << "Print the array"  << endl;
  PrintArray(stringarray , 8);


  return 0;
  }
