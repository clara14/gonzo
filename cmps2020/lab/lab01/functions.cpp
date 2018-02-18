#include "functions.h"

#include "cmpslib.h"

void SortArray(int * data, int count,bool decending )
  {
  /*
  if (decending)

  sort(data,data+count,std::greater<int>());
  else
  sort(data,data+count);
  */
  LogStart(*data, count, decending);
  int   NumberOfValuesSwappedThisPass=1;// cant be zero or it wont loop the first time
  LogLow("NumOfValuesSwappedThisPass set to 1\n");
  int   NumberOfPasses=0;
  LogLow("Num of passes is 0\n");
  while (NumberOfValuesSwappedThisPass != 0)
   
  {
    LogLow("while values swapped this pass is not equal to 0, we begin this: \n");    
    NumberOfValuesSwappedThisPass=0;
    NumberOfPasses++;
    LogLow("values are incremented\n");
    for(int Loop=0; Loop<count-1; Loop++)
    
      if (  (decending) ?  (data[Loop] <  data[Loop+1]): (  data[Loop] >  data[Loop+1]   )  )
        {
        LogLow("Prepairing to swap 2 values   %s and %s \n"   ,data[Loop], data[Loop+1]);
        LogLow("Prepairing to swap 2 values  at postion %s and %s \n"   ,Loop, Loop+1);
        SwapValues(data[Loop],data[Loop+1]);
        LogLow("values swapped\n");
        NumberOfValuesSwappedThisPass++;
        LogLow("NumOfValuesSwappedThisPass incremented\n");
        }
    }
    LogLow("end of for loop\n");
    LogEnd(*data, count, decending);
  }



void PrintArray(int * target, int count)
  {
  LogStart(*target, count);    
  for (int l=0; l<count; l++)
    {
    cout << "Position:" << l << " value:" << target[l] << endl;
    }
  LogEnd(*target, count);
  }


void FillArrayWithRandom(int * target, int count,int min,int max)
  {
  LogStart(*target, count, min, max);    
  for (int loop=0; loop < count; loop++)
    {
    int temp = CreateRandomNumber(min,max);
    target[loop]=temp;
    }
  LogEnd(*target, count, min, max);
  }



