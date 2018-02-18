
#include "cmpslib.h" // all the special functions provided for this class

struct LOGGER_DATA LGDATA; // create a global instance of this struct .. needed by logging library



#include "swappers.h"
#include "functions.h"


#define ARRAYSIZE 100

int main()
  {
  LoggerSetUpLog("example.log");
  int iaData[ARRAYSIZE];
  
  FillArrayWithRandom(iaData,ARRAYSIZE,1,250);
  LogLow("FillArrayWithRandom is created\n");
  SortArray(iaData,ARRAYSIZE);
  LogLow("SortArray with two parameters\n");

  cout  << "Sorted Accending" << endl;
  for (int loop=0; loop<ARRAYSIZE; loop++)
    {
    LogLow("beginning the ascending loop= %s \n", loop);    
    cout << "Position:" << loop  << " value:" << iaData[loop] << endl;
    LogLow("end of ascending loop= %s\n", loop);
    }

  cout << endl;
  
  FillArrayWithRandom(iaData,ARRAYSIZE,1,250);

  LogLow("FillArray is reset\n");
  

  SortArray(iaData,ARRAYSIZE,true);

  cout  << "Sorted Decending" << endl;
  for (int loop=0; loop<ARRAYSIZE; loop++)
    {
    LogLow("beginning descending loop\n");    
    cout << "Position:" << loop  << " value:" << iaData[loop] << endl;
    LogLow("end of descending loop\n");
    }

  return 0;
  }





