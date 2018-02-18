#pragma once
#include "cmpslib.h"




// ELEMTYPE needs a default value, if not set already make it int

#ifndef ELEMTYPE
#define ELEMTYPE int
#endif


class Stack
{
    private:

        ELEMTYPE* stackArray;
        int TopIndex;
        int capacity;

    public:

        Stack(int size=4);
        ~Stack();
        void Push(ELEMTYPE);
        void Pop();
        ELEMTYPE Top();
        bool Empty();
        bool Full();
        int Capacity();

};


Stack::Stack(int size)
{
    LogStart(size);
    capacity = size;
    stackArray = new ELEMTYPE[capacity];
    TopIndex = -1;
    LogEnd();
}

Stack::~Stack()
{
    LogStart();
    delete [] stackArray;
    LogEnd();
}

void Stack::Push(ELEMTYPE val)
{
    LogStart(val);
    if(Full())
    {
        string exc = "Push(): stack is full, cannot add any more values";
        throw exc;
    }
    else
    {
        TopIndex++;
        stackArray[TopIndex] = val;
    }
    LogEnd();
}

void Stack::Pop()
{
    LogStart();
    if(Empty())
    {
        string exc = "Pop(): stack is empty, cannot remove any more values";
        throw exc;
    }
    else
    {
        TopIndex--;
    }

    LogEnd();
}

ELEMTYPE Stack::Top()
{
    LogStart();
    ELEMTYPE temp;
    if(Empty())
    {
        string exc = "Top(): stack is empty, cannot show top value";
        throw exc;
    }
    else
    {
        temp = stackArray[TopIndex];
    }
    LogEndReturning(temp);
    return temp;
}

bool Stack::Empty()
{
    LogStart();
    bool status;
    if(TopIndex == -1)
        status=true;
    else
        status = false;

    LogEndReturning(status);
    return status;
}

bool Stack::Full()
{
    LogStart();
    bool status;
    if(TopIndex == (capacity-1))
        status = true;
    else
        status = false;
    LogEndReturning(status);
    return status;
}

int Stack::Capacity()
{
    LogStart();
    LogEndReturning(capacity);
    return capacity;
}


