#include <iostream>
using namespace std;
#include "cmpslib.h"
struct LOGGER_DATA LGDATA;


#define MAX_SIZE 3 
#define ZEROELEM -999999
#include "Stack.h"

int main()
{
	LoggerSetUpLog("main1.log");
	ArrayStack stk;

	cout << "test stk.Empty :"  <<  boolalpha <<stk.Empty() <<  "   should be true " << endl;
	cout << "test stk.Full  :"  <<  boolalpha <<stk.Full() <<  "   should be false " << endl;

	cout << "Push(5)        :"   <<  boolalpha <<stk.Push(5) << " should be true " << endl;
	cout << "Push(15)       :"   <<  boolalpha <<stk.Push(15) << " should be true " << endl;
	cout << "Push(25)       :"   <<  boolalpha <<stk.Push(25) << " should be true " << endl;
	cout << "Push(35)       :"   <<  boolalpha <<stk.Push(35) << " should be false, the Stack should bestk.Full " << endl;

	cout << "test stk.Empty :"  <<  boolalpha <<stk.Empty() <<  "   should be false " << endl;
	cout << "test stk.Full  :"  <<  boolalpha <<stk.Full() <<  "   should be true  " << endl;


	// now callstk.Top to get the value thenstk.Pop to remove it
	cout << "test stk.Top   :"   << stk.Top()  << "should be 25" << endl;
	cout << "test stk.Pop   :"   << stk.Pop()  << "should be true" << endl;
	cout << "test stk.Top   :"   << stk.Top()  << "should be 15" << endl;
	cout << "test stk.Pop   :"   << stk.Pop()  << "should be true" << endl;
	cout << "test stk.Top   :"   << stk.Top()  << "should be 5" << endl;
	cout << "test stk.Pop   :"   << stk.Pop()  << "should be true" << endl;


	cout << "teststk.Top   :"   << stk.Top()  << "should be " << ZEROELEM  << endl;

	////LoggerClose();
	return 0;
}


