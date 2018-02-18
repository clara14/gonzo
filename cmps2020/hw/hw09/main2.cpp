#include "cmpslib.h"
struct LOGGER_DATA LGDATA;

#ifndef MAX_SIZE
#define MAX_SIZE 6
#endif

#ifndef ELEMTYPE
#define ELEMTYPE int
#endif

#include "Queue.h"



int main()
{
    LoggerSetUpLog("main2.log");

    cout << "creating instance of Queue of integers and maximum size of " 
         << MAX_SIZE << endl;
    Queue<ELEMTYPE> q1;
    cout << "q1.ToString():\n" << q1.ToString() << endl;

    cout << "Calling function Enqueue to fill the queue\n";
    cout << "Should only return true " << (MAX_SIZE-1) << " times\n";
    cout << "q1.Enqueue(56): " << boolalpha << q1.Enqueue(56) << endl;
    cout << "q1.Enqueue(5): " << boolalpha << q1.Enqueue(5) << endl;
    cout << "q1.Enqueue(6): " << boolalpha << q1.Enqueue(6) << endl;
    cout << "q1.Enqueue(43): " << boolalpha << q1.Enqueue(43) << endl;
    cout << "q1.Enqueue(3): " << boolalpha << q1.Enqueue(3) << endl;
    cout << "q1.Enqueue(1): " << boolalpha << q1.Enqueue(1) << endl;

    cout << "\nq1.ToString():\n" << q1.ToString() << endl;

    cout << "Going to remove a few items using Dequeue function\n"
         << "while also showing the front of the queue using Front()\n";
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;
    cout << "q1.Front() should return 5: " << q1.Front() << endl;
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;
    cout << "q1.Front() should return 6: " << q1.Front() << endl;
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;
    cout << "q1.Front() should return 43: " << q1.Front() << endl;

    cout << "\nq1.ToString():\n" << q1.ToString() << endl;

    cout << "Adding a few values to queue to make sure queue is 'circular'\n";
    cout << "q1.Enqueue(8): " << boolalpha << q1.Enqueue(8) << endl;
    cout << "q1.Enqueue(2): " << boolalpha << q1.Enqueue(2) << endl;
    cout << "q1.Enqueue(77): " << boolalpha << q1.Enqueue(77) << endl;

    cout << "\nq1.ToString():\n" << q1.ToString() << endl;

    cout << "Going to remove a few items using Dequeue function\n"
         << "while also showing the front of the queue using Front()\n";
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;
    cout << "q1.Front() should return 3: " << q1.Front() << endl;
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;
    cout << "q1.Front() should return 8: " << q1.Front() << endl;
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;
    cout << "q1.Front() should return 2: " << q1.Front() << endl;
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;
    cout << "q1.Front() should return 77: " << q1.Front() << endl;
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;
    

    cout << "\nq1.ToString():\n" << q1.ToString() << endl;

    cout << "Queue is empty, will test Dequeue a few more times\n"
         << "Should all return false\n";
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;

    cout << "Testing Front() on empty queue, should throw exception\n";
    try
    {
        cout << q1.Front();
        cout << "Exception FAILED\n";
    }
    catch(const char* ayy)
    {
        cout << "Exception caught: " << ayy << endl;
    } 

    
    return(0);
}



