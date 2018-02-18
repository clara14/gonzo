#include "cmpslib.h"
struct LOGGER_DATA LGDATA;

#ifndef MAX_SIZE
#define MAX_SIZE 8
#endif

#ifndef ELEMTYPE
#define ELEMTYPE char
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
    cout << "q1.Enqueue('i'): " << boolalpha << q1.Enqueue('i') << endl;
    cout << "q1.Enqueue('m'): " << boolalpha << q1.Enqueue('m') << endl;
    cout << "q1.Enqueue('a'): " << boolalpha << q1.Enqueue('a') << endl;
    cout << "q1.Enqueue('g'): " << boolalpha << q1.Enqueue('g') << endl;
    cout << "q1.Enqueue('i'): " << boolalpha << q1.Enqueue('i') << endl;
    cout << "q1.Enqueue('n'): " << boolalpha << q1.Enqueue('n') << endl;
    cout << "q1.Enqueue('e'): " << boolalpha << q1.Enqueue('e') << endl;
    cout << "q1.Enqueue('!'): " << boolalpha << q1.Enqueue('!') << endl;

    cout << "\nq1.ToString():\n" << q1.ToString() << endl;

    cout << "Going to remove a few items using Dequeue function\n"
         << "while also showing the front of the queue using Front()\n";
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;
    cout << "q1.Front() should return m: " << q1.Front() << endl;
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;
    cout << "q1.Front() should return a: " << q1.Front() << endl;
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;
    cout << "q1.Front() should return g: " << q1.Front() << endl;

    cout << "\nq1.ToString():\n" << q1.ToString() << endl;

    cout << "Adding a few values to queue to make sure queue is 'circular'\n";
    cout << "q1.Enqueue('y'): " << boolalpha << q1.Enqueue('y') << endl;
    cout << "q1.Enqueue('r'): " << boolalpha << q1.Enqueue('r') << endl;
    cout << "q1.Enqueue('a'): " << boolalpha << q1.Enqueue('a') << endl;

    cout << "\nq1.ToString():\n" << q1.ToString() << endl;

    cout << "Going to remove a few items using Dequeue function\n"
         << "while also showing the front of the queue using Front()\n";
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;
    cout << "q1.Front() should return i: " << q1.Front() << endl;
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;
    cout << "q1.Front() should return n: " << q1.Front() << endl;
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;
    cout << "q1.Front() should return e: " << q1.Front() << endl;
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;
    cout << "q1.Front() should return y: " << q1.Front() << endl;
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;
    cout << "q1.Front() should return r: " << q1.Front() << endl;
    cout << "q1.Dequeue(): " << boolalpha << q1.Dequeue() << endl;
    cout << "q1.Front() should return a: " << q1.Front() << endl;
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



