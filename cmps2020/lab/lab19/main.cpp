

#include "cmpslib.h"
struct LOGGER_DATA LGDATA; // create a global instance of this struct .. needed by logging library




#include "SLinkedList.h"


int main()
{
	LoggerSetUpLog("main.log");

	SLinkedList list1;
	cout << list1.ToString() << endl;

	cout << "using the Insert function on an empty container should create a node at the front ( head ) of the Linked List" << endl;
	cout << "inserting 30" << endl;
	list1.Insert(30);
	cout << list1.ToString() << endl;



	cout << "using the Insert function with no 2nd parameter should insert before the head node" << endl;
	cout << "inserting 20" << endl;
	list1.Insert(20);
	cout << list1.ToString() << endl;



	cout << "using the Insert function with no 2nd parameter should insert before the head node" << endl;
	cout << "inserting 10" << endl;
	list1.Insert(10);
	cout << list1.ToString() << endl;



	cout << "using the Insert function with a pointer to the node with a value of 20  should insert AFTER that node," << endl;
	cout << "inserting 25" << endl;
	list1.Insert(25,list1.Search(20));
	cout << list1.ToString() << endl;



	cout << "using the Delete function with a pointer to the node with a value of 20  should Delete that node," << endl;
	cout << "deleting 20" << endl;
	list1.Delete(list1.Search(20));
	cout << list1.ToString() << endl;



	cout << "using the Delete to remove the front element" << endl;
	cout << "deleting 10" << endl;
	list1.Delete(list1.Search(10));
	cout << list1.ToString() << endl;


	cout << "using the Delete to remove from the back of the container" << endl;
	cout << "deleting 30" << endl;
	list1.Delete(list1.Search(30));
	cout << list1.ToString() << endl;


	cout << "using the Delete to remove the last element from the container" << endl;
	cout << "deleting 25" << endl;
	list1.Delete(list1.Search(25));
	cout << list1.ToString() << endl;

	return 0;
}
