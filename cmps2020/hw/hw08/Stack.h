#pragma once
#include "cmpslib.h"


template<class T>
class Stack
{
    private:
        T* Array;
        int TopIndex;
        int capacity;

    public:

        Stack(int cap=4)
        {
            LogStart();
            TopIndex = -1;
            capacity = cap;
            Array = new T[capacity];
            LogEnd();
        }
        ~Stack()
        {
            LogStart();
            delete [] Array;
            LogEnd();
        }
        bool Empty()
        {
            LogStart();
            bool status;
            if(TopIndex==-1)
                status = true;
            else
                status = false;
            LogEndReturning(status);
            return status;
        }
        bool Full()
        {
            LogStart();
            bool status;
            if(TopIndex==(capacity-1))
                status = true;
            else
                status = false;
            LogEndReturning(status);
            return status;
        }
        bool Push(T val)
        {
            LogStart(val);
            bool status;
            if(Full())
            {
                T* temp = new T[capacity*2];
                for(int loop=0;loop<capacity;loop++)
                {
                    temp[loop] = Array[loop];
                }
                delete [] Array;
                Array = temp;
                capacity *= 2;
            }
            
            
            status = true;
            TopIndex++;
            Array[TopIndex] = val;
            
            LogEndReturning(status);
            return status;
        }
        bool Pop()
        {
            LogStart();
            bool status;
            if(Empty())
            {
                status = false;
            }
            else
            {
                TopIndex--;
                status = true;
            }
            LogEndReturning(status);
            return status;
        }
        T Top()
        {
            LogStart();
            if(Empty())
                throw std::runtime_error("Top() called on empty stack");
            LogEndReturning(Array[TopIndex]);
            return(Array[TopIndex]);
        }
        string ToString()
        {
            LogStart();
            ostringstream temp;
            temp << "TopIndex: " << TopIndex << endl
                 << "Capacity(): " << Capacity() << endl
                 << "Empty(): " << boolalpha << Empty() << endl
                 << "Full(): " << boolalpha << Full() << endl;
            LogEndReturning(temp.str());
            return temp.str();
        }
        int Capacity()
        {
            LogStart();
            LogEndReturning(capacity);
            return capacity;
        }

};

