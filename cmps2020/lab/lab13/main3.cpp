#include <iostream>
using namespace std;
#include "cmpslib.h"
struct LOGGER_DATA LGDATA;

#define MAX_SIZE 3 
#define ELEMTYPE char
#define ZEROELEM '0'

#include "Stack.h"

int main()
{
	LoggerSetUpLog("main3.log");
	ArrayStack stk;

	cout << "test stk.Empty :"  <<  ((stk.Empty() == true)? "PASS":"FAIL") << endl;
	cout << "test stk.Full  :"  <<  ((stk.Full() ==  false )? "PASS":"FAIL") << endl;
	cout << "test stk.Push  :"  <<  ((stk.Push('a')== true)? "PASS":"FAIL") << endl;
	cout << "test stk.Push  :"  <<  ((stk.Push('b')== true)? "PASS":"FAIL") << endl;
	cout << "test stk.Push  :"  <<  ((stk.Push('c')== true)? "PASS":"FAIL") << endl;

	cout << "test stk.Empty :"  <<  ((stk.Empty() == false)? "PASS":"FAIL") << endl;// stk.Empty should return false
	cout << "test stk.Full  :"  <<  ((stk.Full() ==  true )? "PASS":"FAIL") << endl;// stk.Full should return true

	cout << "test stk.Push  :"  <<  ((stk.Push('d')== false)? "PASS":"FAIL") << endl;//stk.Push should fail


	// now call stk.Top to get the value then stk.Pop to remove it
	cout << "test stk.Top   :"   <<  ((stk.Top() =='c')? "PASS":"FAIL") << endl;
	cout << "test stk.Pop   :"   <<  ((stk.Pop() == true)? "PASS":"FAIL") << endl;

	cout << "test stk.Top   :"   <<  ((stk.Top() == 'b')? "PASS":"FAIL") << endl;
	cout << "test stk.Pop   :"   <<  ((stk.Pop() == true)? "PASS":"FAIL") << endl;

	cout << "test stk.Top   :"   <<  ((stk.Top() == 'a')? "PASS":"FAIL") << endl;
	cout << "test stk.Pop   :"   <<  ((stk.Pop() == true)? "PASS":"FAIL") << endl;

	cout << "test stk.Empty :"   <<  ((stk.Empty() == true)? "PASS":"FAIL") << endl;// stk.Empty should return true
	cout << "test stk.Full  :"   <<  ((stk.Full() ==  false )? "PASS":"FAIL") << endl;// stk.Full should return false
	cout << "test stk.Top   :"   <<  ((stk.Top() == ZEROELEM )? "PASS":"FAIL") << endl; //stk.Top should return ZEROELEM if stk.Empty
	cout << "test stk.Pop   :"   <<  ((stk.Pop() == false)? "PASS":"FAIL") << endl;// stk.Pop when stk.Empty should return false
	////LoggerClose();
	return 0;
}


