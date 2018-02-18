#pragma once
#include "cmpslib.h"

#ifndef MAX_SIZE
#define MAX_SIZE 10
#endif

#ifndef ELEMTYPE 
#define ELEMTYPE int
#endif


#define next(x) ((x + 1) % MAX_SIZE)  // return the position after the value passed in

#define previous(x)  ((MAX_SIZE + (x - 1)) % MAX_SIZE) // return the postition before the value passed in


// templated Queue class
// members:
// array of template type
// front and back index
template<class T>
class Queue
{
    private:
        T data[MAX_SIZE];
        int frontIndex;
        int backIndex;
        
    public:
        Queue()
        {
            LogStart();
            frontIndex=0;
            backIndex=0;
            LogEnd();
        }
        bool Empty()
        {
            LogStart();
            bool status;
            if(backIndex==frontIndex)
                status=true;
            else
                status=false;
            LogEndReturning(status);
            return status;
        }
        bool Full()
        {
            LogStart();
            bool status;
            if(next(backIndex)==frontIndex)
                status=true;
            else
                status=false;
            LogEndReturning(status);
            return status;
        }
        bool Enqueue(T val)
        {
            LogStart(val);
            bool status;
            if(Full())
                status=false;
            else
            {
                data[backIndex]=val;
                backIndex = next(backIndex);
                status=true;
            }
            LogEndReturning(status);
            return status;
        }
        bool Dequeue()
        {
            LogStart();
            bool status;
            if(Empty())
                status=false;
            else
            {
                frontIndex = next(frontIndex);
                status=true;
            }
            LogEndReturning(status);
            return status;
        }
        T Front()
        {
            LogStart();
            if(Empty())
                throw "Cannot return front value if queue is empty";
            LogEndReturning(data[frontIndex]);
            return data[frontIndex];
        }
        int Size()
        {
            LogStart();
            int size;
            if(backIndex<frontIndex)
            {
                size = (MAX_SIZE - frontIndex) + backIndex;
            }
            else
                size = backIndex - frontIndex;
            LogEndReturning(size);
            return size;
        }
        string ToString()
        {
            LogStart();
            ostringstream temp;
            temp << "Empty(): " << boolalpha << Empty() << endl
                 << "Full(): " << boolalpha << Full() << endl
                 << "Size(): " << Size() << endl;
            if(backIndex<frontIndex)
            {
                for(int loop=frontIndex;loop<MAX_SIZE;loop++)
                {
                    temp << "data["<<loop<<"]= " << data[loop] << endl;
                }
                for(int loop=0;loop<backIndex;loop++)
                {
                    temp << "data["<<loop<<"]= " << data[loop] << endl;
                }
            }
            else
            {
                for(int loop=frontIndex;loop<backIndex;loop++)
                {
                    temp << "data["<<loop<<"]= " << data[loop] << endl;
                }
            }
            LogEndReturning(temp.str());
            return temp.str();
        }
};
// Constructor, set the Front and back index to 0

// Function Empty ,if the Front and back index are the same it is Empty

// Function Full , if you were to move forward one space from the backIndex would it equal the FrontIndex?

// function Enqueue
// if the Queue is Full return false
// store the value at the backIndex
// move the value of the backIndex one forward
// return true

// Function Remove
// Remove the element at the Front of the Queue
// if the Queue is Empty return false
// if we want to remove the Front element we need to change the FrontIndex
// move the FrontIndex forward
// return true

// Function Front
// return the value at the Front of the Queue
// if the Queue is Empty throw an excpetion

// Function Size
// how many item are in the queue

// Function ToString



 // end of class




