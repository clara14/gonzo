#include "cmpslib.h"
struct LOGGER_DATA LGDATA; // create a global instance of this struct .. needed by logging library

#include "Computer.h"

int main()
  {
  LoggerSetUpLog("main.log");

  Computer one;
  one.ToString();

  Computer two(4,1.6 ,1000,4,"Pentium N3700");


  two.ToString();


  Computer three( two );


  three.ToString();


  return 0;
  }
