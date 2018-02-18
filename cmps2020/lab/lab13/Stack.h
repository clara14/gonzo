#pragma once
#include "cmpslib.h"

#ifndef ELEMTYPE
#define ELEMTYPE int
#endif

#ifndef ZEROELEM
#define ZEROELEM 0
#endif

#ifndef MAX_SIZE
#define MAX_SIZE 100
#endif


//class

class ArrayStack
{
    private:
        ELEMTYPE Array[MAX_SIZE];
        int TopIndex;

    public:

        ArrayStack();
        bool Empty();
        bool Full();
        bool Push(ELEMTYPE);
        bool Pop();
        ELEMTYPE Top();

};

// Initialize the stack

ArrayStack::ArrayStack()
  {
    LogStart();
    
    TopIndex = -1;

    LogEnd();
  }

// Check if the stack is currently Empty

bool ArrayStack::Empty()
{
      LogStart();
      bool status;

      if(TopIndex == -1)
          status = true;
      else
          status = false;

      LogEndReturning(status);
      return status;
  
    
}

// Check if the stack is currently Full

bool ArrayStack::Full()
{
    LogStart();
    bool status;

    if(TopIndex == (MAX_SIZE-1))
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

// Add an element to the Top of the stack

bool ArrayStack::Push(ELEMTYPE elem)
{
    LogStart(elem);

    bool status;
    if(Full()==true)
        status=false;
    else
    {
        TopIndex++;
        Array[TopIndex] = elem;
        status = true;
    }

    LogEndReturning(status);
    return status;

}

// Remove the element at the Top of the stack

bool ArrayStack::Pop()
{
    LogStart();
    bool status;
    if(Empty()==true)
        status = false;
    else
    {
        TopIndex--;
        status = true;
    }

    LogEndReturning(status);
    return status;

}

// Retrieve the value at the Top of the stack but do not delete it

ELEMTYPE ArrayStack::Top()
{
    LogStart();
    ELEMTYPE temp;
    if(Empty())
    {
        temp = ZEROELEM;
    }
    else
    {
        temp = Array[TopIndex];
    }
     
    LogEndReturning(temp);
    return temp;

}

