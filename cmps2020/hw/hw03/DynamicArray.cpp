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


