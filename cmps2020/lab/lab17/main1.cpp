#include <iostream>
using namespace std;
#include "cmpslib.h"
struct LOGGER_DATA LGDATA;


#define QUEUESIZE 4
#include "Queue.h"

int main()
{
	LoggerSetUpLog("main1.log");
	Queue Queue1;
	cout << Queue1.ToString() << endl;
	int temp=5;


	temp=5;
	cout << "enQueue("<<temp<<")   :"    <<  PF(true == Queue1.enQueue(temp))  << endl;
	temp=10;
	cout << "enQueue("<<temp<<")   :"    <<  PF(true == Queue1.enQueue(temp))  << endl;
	temp=15;
	cout << "enQueue("<<temp<<")   :"    <<  PF(true == Queue1.enQueue(temp))  << endl;
	temp=25;
	cout << "enQueue("<<temp<<")   :"    <<  PF(true == Queue1.enQueue(temp))  << endl;
	cout << Queue1.ToString() << endl;
	cout << endl << "Should not allow any more inserts" << endl;

	temp=30;
	cout << "enQueue("<<temp<<")   :"    <<  PF(false == Queue1.enQueue(temp))  << endl;
	temp=35;
	cout << "enQueue("<<temp<<")   :"    <<  PF(false == Queue1.enQueue(temp))  << endl;
	temp=40;
	cout << "enQueue("<<temp<<")   :"    <<  PF(false == Queue1.enQueue(temp))  << endl;
	temp=45;
	cout << "enQueue("<<temp<<")   :"    <<  PF(false == Queue1.enQueue(temp))  << endl;
	cout << Queue1.ToString() << endl;


	cout << "test Queue1.peekFront   :"   << Queue1.peekFront()  << " should be 5" << endl;
	cout << "test Queue1.deQueue   :"   << Queue1.deQueue()  << " should be true" << endl;
	cout << Queue1.ToString() << endl;
	cout << "test Queue1.peekFront   :"   << Queue1.peekFront()  << " should be 10" << endl;
	cout << "test Queue1.deQueue   :"   << Queue1.deQueue()  << " should be true" << endl;
	cout << Queue1.ToString() << endl;
	cout << "test Queue1.peekFront   :"   << Queue1.peekFront()  << " should be 15" << endl;
	cout << "test Queue1.deQueue   :"   << Queue1.deQueue()  << " should be true" << endl;
	cout << Queue1.ToString() << endl;
	cout << "test Queue1.peekFront   :"   << Queue1.peekFront()  << " should be 25" << endl;
	cout << "test Queue1.deQueue   :"   << Queue1.deQueue()  << " should be true" << endl;
	cout << Queue1.ToString() << endl;

	try
	{
		// test that peekFront will throw an exception
		Queue1.peekFront();
		cout << "Fail:"<<endl;


	}
	catch (const char *)
	{
		cout <<"Pass:"<<endl;
	}
	return 0;
}


