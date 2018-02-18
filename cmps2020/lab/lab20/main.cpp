#include <iostream>
using namespace std;
#include "cmpslib.h"
struct LOGGER_DATA LGDATA;

#include "SLinkedList.h"
#include "AVL.h"

#define MAX_VALUES 10000

#define DFS .53










int main()
{
	LoggerSetUpLog("main.log");
	clock_t start,med,end;

	cout << "single linked list" << endl;
	start = clock();
	/* 
	   Create an instance of the SLinkedListClass
	   insert the values from 0 to MAX_VALUES incrementing by one each time
	   ie.. store 0 then 1 then 2 then 3 ....
	 */
	SLinkedList temp;
	for ( int loop2=0;loop2< MAX_VALUES;loop2++)
		temp.Insert(loop2);
	med = clock();
	/* 
	   create a ListNode and set it by calling the Search function
	   search for the value (DFS * MAX_VALUES)
	   imagine that MAX_VALUES was 100 the list would have values from 0 to 100 in order
	   DFS is the percentage of the array we would have to search
	 */

	SListNode*  ptr = temp.Search(DFS * MAX_VALUES);
	end = clock();

	cout << "insert time:" << (double) (med - start) << endl;
	cout << "search time:" << (double) (end - med) << endl;

	/* 
	   repeat the same process above two more times
	   once again with the SLinkedList, using InsertBack

	   finally with the AVL TREE
	 */

    cout << "\nsingle linked list (back Insert)\n";
    start=clock();

    SLinkedList temp2;
    for(int loop=0;loop<MAX_VALUES;loop++)
    {
        temp2.InsertBack(loop);
    }
    med = clock();

    SListNode* ptr2 = temp2.Search(DFS * MAX_VALUES);
    end = clock();

    cout << "insert time: " << (double) (med - start) << endl;
    cout << "search time: " << (double) (end - med) << endl;
    

    cout << "\nAVL\n";
    start=clock();

    AVL temp3;
    for(int loop=0;loop<MAX_VALUES;loop++)
    {
        temp3.insert(loop);
    }
    med = clock();

    TreeNode* ptr3 = temp3.search(DFS * MAX_VALUES);
    end = clock();

    cout << "insert time: " << (double) (med - start) << endl;
    cout << "search time: " << (double) (end - med) << endl;
    

	


	return 0;
}


