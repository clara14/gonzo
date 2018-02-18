#include <iostream>
using namespace std;
#include "cmpslib.h"
struct LOGGER_DATA LGDATA;

#define MAX_SIZE 10

#include "Stack.h"

int main()
{
	LoggerSetUpLog("main1.log");
	ArrayStack stk;

	cout << "test stk.Empty :"  <<  ((stk.Empty() == true)? "PASS":"FAIL") << endl;
	cout << "test stk.Full  :"   <<  ((stk.Full() ==  false )? "PASS":"FAIL") << endl;
	cout << "test stk.Push  :"   <<  ((stk.Push(5)== true)? "PASS":"FAIL") << endl;
	cout << "test stk.Push  :"   <<  ((stk.Push(6)== true)? "PASS":"FAIL") << endl;
	cout << "test stk.Push  :"   <<  ((stk.Push(7)== true)? "PASS":"FAIL") << endl;
	cout << "test stk.Push  :"   <<  ((stk.Push(8)== true)? "PASS":"FAIL") << endl;
	cout << "test stk.Push  :"   <<  ((stk.Push(9)== true)? "PASS":"FAIL") << endl;
	cout << "test stk.Push  :"   <<  ((stk.Push(10)== true)? "PASS":"FAIL") << endl;
	cout << "test stk.Push  :"   <<  ((stk.Push(11)== true)? "PASS":"FAIL") << endl;
	cout << "test stk.Push  :"   <<  ((stk.Push(12)== true)? "PASS":"FAIL") << endl;
	cout << "test stk.Push  :"   <<  ((stk.Push(13)== true)? "PASS":"FAIL") << endl;
	cout << "test stk.Push  :"   <<  ((stk.Push(14)== true)? "PASS":"FAIL") << endl;

	cout << "test stk.Empty :"  <<  ((stk.Empty() == false)? "PASS":"FAIL") << endl;// stk.Empty should return false
	cout << "test stk.Full  :"   <<  ((stk.Full() ==  true )? "PASS":"FAIL") << endl;// stk.Full should return true

	cout << "test stk.Push  :"   <<  ((stk.Push(15)== false)? "PASS":"FAIL") << endl;//stk.Push should fail


	// now call stk.Top to get the value then stk.Pop to remove it
	cout << "test stk.Top   :"   <<  ((stk.Top() == 14)? "PASS":"FAIL") << endl;
	cout << "test stk.Pop   :"   <<  ((stk.Pop() == true)? "PASS":"FAIL") << endl;

	cout << "test stk.Top   :"   <<  ((stk.Top() == 13)? "PASS":"FAIL") << endl;
	cout << "test stk.Pop   :"   <<  ((stk.Pop() == true)? "PASS":"FAIL") << endl;

	cout << "test stk.Top   :"   <<  ((stk.Top() == 12)? "PASS":"FAIL") << endl;
	cout << "test stk.Pop   :"   <<  ((stk.Pop() == true)? "PASS":"FAIL") << endl;

	cout << "test stk.Top   :"   <<  ((stk.Top() == 11)? "PASS":"FAIL") << endl;
	cout << "test stk.Pop   :"   <<  ((stk.Pop() == true)? "PASS":"FAIL") << endl;

	cout << "test stk.Top   :"   <<  ((stk.Top() == 10)? "PASS":"FAIL") << endl;
	cout << "test stk.Pop   :"   <<  ((stk.Pop() == true)? "PASS":"FAIL") << endl;

	cout << "test stk.Top   :"   <<  ((stk.Top() == 9)? "PASS":"FAIL") << endl;
	cout << "test stk.Pop   :"   <<  ((stk.Pop() == true)? "PASS":"FAIL") << endl;
	cout << "test stk.Top   :"   <<  ((stk.Top() == 8 )? "PASS":"FAIL") << endl;
	cout << "test stk.Pop   :"   <<  ((stk.Pop() == true)? "PASS":"FAIL") << endl;
	cout << "test stk.Top   :"   <<  ((stk.Top() == 7)? "PASS":"FAIL") << endl;
	cout << "test stk.Pop   :"   <<  ((stk.Pop() == true)? "PASS":"FAIL") << endl;
	cout << "test stk.Top   :"   <<  ((stk.Top() == 6)? "PASS":"FAIL") << endl;
	cout << "test stk.Pop   :"   <<  ((stk.Pop() == true)? "PASS":"FAIL") << endl;
	cout << "test stk.Top   :"   <<  ((stk.Top() == 5)? "PASS":"FAIL") << endl;
	cout << "test stk.Pop   :"   <<  ((stk.Pop() == true)? "PASS":"FAIL") << endl;

	cout << "test stk.Empty :"  <<  ((stk.Empty() == true)? "PASS":"FAIL") << endl;// stk.Empty should return true
	cout << "test stk.Full  :"   <<  ((stk.Full() ==  false )? "PASS":"FAIL") << endl;// stk.Full should return false
	cout << "test stk.Top   :"   <<  ((stk.Top() == ZEROELEM)? "PASS":"FAIL") << endl; //stk.Top should return ZEROELEM if stk.Empty
	cout << "test stk.Pop   :"   <<  ((stk.Pop() == false)? "PASS":"FAIL") << endl;// stk.Pop when stk.Empty should return false
	////LoggerClose();
	return 0;
}


