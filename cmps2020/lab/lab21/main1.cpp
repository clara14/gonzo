
#include "cmpslib.h"
struct LOGGER_DATA LGDATA; // create a global instance of this struct .. needed by logging library


#include "DLinkedList.h"
#include "print.h"

int main()
{
	LoggerSetUpLog("main.log");
	DLinkedList list1;


	ToHTMLFile(list1,"llist.html");


	return 0;
}
