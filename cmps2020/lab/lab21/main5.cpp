
#include "cmpslib.h"
struct LOGGER_DATA LGDATA; // create a global instance of this struct .. needed by logging library


#include "DLinkedList.h"
#include "print.h"

int main()
{
	LoggerSetUpLog("main.log");
	DLinkedList list1;

	list1.listInsert(11);
	cout << list1.ToString() << endl;
	list1.listInsert(22);
	list1.listInsert(33);
	list1.listInsert(99);
	list1.listInsert(88);
	list1.listInsert(77);
	list1.listInsert(66);
	list1.listInsert(55);
	list1.listInsert(44);
	cout << list1.ToString() << endl;

	ToHTMLFile(list1,"llist.html");


    cout << "listSearch(33) returns " << list1.listSearch(33) << endl; 
    cout << "listReverseSearch(33) returns " << list1.listReverseSearch(33) << endl;
    

    cout << "listSearch(66) returns " << list1.listSearch(66) << endl;
    cout << "listReverseSearch(66) returns " << list1.listReverseSearch(66) << endl;

	list1.listDelete(list1.listSearch(22));
	cout << list1.ToString() << endl;


	return 0;
}
