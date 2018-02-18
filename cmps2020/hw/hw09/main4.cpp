#include "cmpslib.h"
struct LOGGER_DATA LGDATA;

#ifndef MAX_SIZE
#define MAX_SIZE 5
#endif

#ifndef ELEMTYPE
#define ELEMTYPE string
#endif

#include "Queue.h"



int main()
{
    LoggerSetUpLog("main3.log");

    cout << "creating instance of Queue of integers and maximum size of " 
         << MAX_SIZE << endl;
    Queue<ELEMTYPE> q1;
    cout << "q1.ToString():\n" << q1.ToString() << endl;

    cout << "Calling function Enqueue to fill the queue\n";
    cout << "Should only return true " << (MAX_SIZE-1) << " times\n";
    cout << "q1.Enqueue('i made'): " << boolalpha << q1.Enqueue("i made") << endl;
    cout << "q1.Enqueue('you this'): " << boolalpha << q1.Enqueue("you this") << endl;
    cout << "q1.Enqueue('sweater with'): " << boolalpha << q1.Enqueue("sweater with") << endl;
    cout << "q1.Enqueue('my tears'): " << boolalpha << q1.Enqueue("my tears") << endl;
    cout << "q1.Enqueue('and hatred'): " << boolalpha << q1.Enqueue("and hatred") << endl;
    
    cout << "\nq1.ToString():\n" << q1.ToString() << endl;

    cout << "Going to remove a few items using Dequeue function\n"
         << "while also showing the front of the queue using Front()\n";
    cout << "q1.Front() should return 'i made': " << q1.Front() << endl;
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;
    cout << "q1.Front() should return 'you this': " << q1.Front() << endl;
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;
    cout << "q1.Front() should return 'sweater with': " << q1.Front() << endl;
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;
    cout << "q1.Front() should return 'my tears': " << q1.Front() << endl;

    cout << "\nq1.ToString():\n" << q1.ToString() << endl;

    cout << "Adding a few values to queue to make sure queue is 'circular'\n";
    cout << "q1.Enqueue('Falcons'): " << boolalpha << q1.Enqueue("Falcons") << endl;
    cout << "q1.Enqueue('blew'): " << boolalpha << q1.Enqueue("blew") << endl;
    cout << "q1.Enqueue('a 28-3 lead'): " << boolalpha << q1.Enqueue("a 28-3 lead") << endl;

    cout << "\nq1.ToString():\n" << q1.ToString() << endl;

    cout << "Going to remove a few items using Dequeue function\n"
         << "while also showing the front of the queue using Front()\n";
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;
    cout << "q1.Front() should return 'Falcons': " << q1.Front() << endl;
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;
    cout << "q1.Front() should return 'blew': " << q1.Front() << endl;
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;
    cout << "q1.Front() should return 'a 28-3 lead': " << q1.Front() << endl;
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



