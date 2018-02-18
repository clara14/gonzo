#include "StaticArray.h"


StaticArray::StaticArray()
  {
  LogStart();
  // nothing to do

  LogEnd();
  }

StaticArray::~StaticArray()
  {
  LogStart();
  // nothing to do
  

  LogEnd();

  }

string StaticArray::ToString()
  {
  // completed for you

  LogStart();
  ostringstream temp;
  for (int loop =0; loop<5; loop++)
    {
    temp << "data[" << loop << "] value: " << data[loop] << endl;
    }

  LogEndReturning(temp.str());
  return temp.str();
  }

bool StaticArray::SetValue(string input ,int pos)
  {
  // store the value of parameter 1 into the array
  
  // at the position given in parameter 2
  
    if(pos >= 0 && pos < 5)
    {
        data[pos]=input;
        return true;
    }
    else
        return false;

  
  }




