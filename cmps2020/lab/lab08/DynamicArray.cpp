#include "DynamicArray.h"


// put all the function bodies for the DynamicArray class here

DynamicArray::DynamicArray(int cap)
{
    LogStart(cap);
    LogLow("at the beginning of constructor. the pointer data is %s\n",&data);
    capacity = cap;
    LogLow("setting the pointer 'data' to a new array of size %s\n",capacity);
    data = new string[capacity];
    LogLow("at the end of constructor. the pointer data is %s, it should be different than what it was\n",&data);
    LogEnd(cap);
}

DynamicArray::~DynamicArray()
{
    LogStart();
    LogLow("deleting [] data in destructor\n");
    delete [] data;
    LogEnd();
}

string DynamicArray::ToString()
{
    LogStart();
    ostringstream temp;
    temp << "capacity: " << capacity << endl;
    for(int loop=0;loop<capacity;loop++)
    {
        temp << "data[" << loop << "] value: " << data[loop] << endl;
    }
    LogEndReturning(temp.str());
    return temp.str();

}

bool DynamicArray::SetValue(string input, int pos)
{
    LogStart(input,pos);
    if(pos>=0 && pos < capacity)
    {
        data[pos] = input;
        LogEndReturning(true);
        return true;
    }
    else
        LogEndReturning(false);
        return false;

}

bool DynamicArray::operator == (const DynamicArray &right)
{
    LogStart(right);
    bool status;

    if(capacity == right.capacity)
    {
        status = true;

       for(int loop=0;loop<capacity;loop++)
       {
            if(!(data[loop] == right.data[loop]))
                status = false;
       }
    }
    else
        status = false;

    LogEndReturning(status);
    return status;
}

DynamicArray& DynamicArray::operator=(const DynamicArray &right)
{
    LogStart(right);

    if(right.capacity > capacity)
    {
        delete [] data;
        data = new string[right.capacity];
        capacity = right.capacity;
    }

    for(int loop=0;loop<right.capacity;loop++)
    {
        data[loop] = right.data[loop];
    }

    LogEndReturning(*this);
    return(*this);
}

DynamicArray DynamicArray::operator+(const DynamicArray &right)
{
    LogStart(right);
    int sum = capacity + right.capacity;
    DynamicArray temp(sum);
    for(int loop=0;loop<capacity;loop++)
    {
        temp.data[loop] = data[loop];
    }
    for(int loop2=0;loop2<right.capacity;loop2++)
    {
        temp.data[loop2+capacity] = right.data[loop2];
    }
    LogEndReturning(temp);
    return temp;
}






            

