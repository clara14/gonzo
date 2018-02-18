#pragma once
#include "cmpslib.h"



#ifndef QUEUESIZE
#define QUEUESIZE 10
#endif

#ifndef ELEMTYPE
#define ELEMTYPE int
#endif

class Queue
{
	private:
		ELEMTYPE data[QUEUESIZE];
		int backIndex;

	public:

		Queue();
		~Queue();
		bool empty();
		bool full();
		int size();
		bool enQueue(ELEMTYPE elem);
		bool deQueue();
		ELEMTYPE peekFront();
		string ToString();// return a string representation of the data in the container..

};

// the size is the difference between the back and front

// for this queue the fornt is always index 0

int Queue::size()
{
	LogStart();
	{
		LogEndReturning(backIndex);
		return backIndex;
	};
	return backIndex;
}



// Initialize the Queue

Queue::Queue( )
{
	LogStart();
    backIndex = 0;
    LogEnd();

}


Queue::~Queue()
{
	
}


bool Queue::empty()
{
	LogStart();
    bool status;
    if(backIndex==0)
    {
        status = true;
    }
    else
    {
        status = false;
    }
    LogEndReturning(status);
    return status;
}


// Check if the Queue is currently full

bool Queue::full()
{
	LogStart();
    bool status;
    if(backIndex==QUEUESIZE)
    {
        status=true;
    }
    else
    {
        status=false;
    }
    LogEndReturning(status);
    return status;
}

// Add an element to the top of the Queue

bool Queue::enQueue(ELEMTYPE elem)
{
    LogStart(elem);
    bool status;
    if(full())
    {   
        status=false;
    }
    else
    {
        data[backIndex]=elem;
        backIndex++;
        status=true;
    }
    LogEndReturning(status);
    return status;
}


// Remove the element at the top of the Queue

bool Queue::deQueue()
{
    LogStart();
    bool status;
    if(empty())
    {
        status=false;
    }
    else
    {
        if(backIndex>1)
        {
            
            for(int loop=0;loop<(backIndex-1);loop++)
            {
                LogLow("gonna switch positions %s and %s\n",loop, (loop+1));
                data[loop] = data[loop+1];
                
            }
        }
            status=true;
    }
    backIndex--;
    LogEndReturning(status);
    return status;
}




// Retrieve the value at the top of the Queue but do not delete it

ELEMTYPE Queue::peekFront()
{
	// if the queue is empty throw a descriptive exception
// return the value at the top of the Queue
    LogStart();
    if(empty())
    {
        throw"function peekFront() failed, the queue is empty";
        
    }
    LogEndReturning(data[0]);
    return data[0];
}


string Queue::ToString()
{
	LogStart();
	string return_value="";
	ostringstream oss;
	oss << "backIndex: " << backIndex << endl
		<< "size(): "      << size() << endl
		<< "empty(): "	 << empty() << endl
		<< "full(): "    << full() << endl;

	for (int loop = 0; loop< size(); loop++)
	{
		int position = loop;
		oss << "data["<< position <<"]: address: " << (void*) (data+position) << " value: " <<   data[position] << endl;

	}
	return_value = oss.str();
	{
		LogEndReturning(return_value);
		return return_value;
	};
	return return_value;
}



