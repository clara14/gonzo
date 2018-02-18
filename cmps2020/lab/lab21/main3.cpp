
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
	cout << list1.ToString() << endl;

	ToHTMLFile(list1, "llisth.html");

	list1.listDelete(list1.listSearch(22));
	cout << list1.ToString() << endl;


	return 0;
}
