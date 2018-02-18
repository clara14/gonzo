#include "DynamicArray.h"


// put all the function bodies for the DynamicArray class here
int DynamicArray::object_count=0;

DynamicArray::DynamicArray(int cap)
{
    LogStart(cap);
    LogLow("incrementing object count\n");
    object_count++;
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
    LogLow("incrementing object count\n");
    object_count--;
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

int DynamicArray::GetObjectCount()
{
    LogStart();
    LogEndReturning(object_count);
    return(object_count);
}

string CreateXML(DynamicArray &copy)
{
    LogStart(copy);
    ostringstream temp;

    temp << "<DynamicArray>\n"
         << "<capacity>" << copy.capacity << "</capacity>\n"
         << "<object_count>" << copy.object_count << "</object_count>\n"
         << "<data>\n";

        for(int loop=0;loop<copy.capacity;loop++)
        {
            temp << "<value>" << copy.data[loop] << "</value>" << endl;
        }
    
    temp << "</data>\n" 
         << "</DynamicArray>\n";

    LogEndReturning(temp.str());
    return(temp.str());
}

  

