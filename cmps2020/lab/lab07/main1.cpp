#include "cmpslib.h" // all the special functions provided for this class

struct LOGGER_DATA LGDATA; // create a global instance of this struct .. needed by logging library



#include "Computer.h"


int main()
  {
  LoggerSetUpLog("main1.log");
  if (true)
    {
    
    }

  cout <<  "Computer::GetCount() : " << Computer::GetCount() << endl;
  
  Computer one(4,1.6,500,4,"Pentium N3700");

  cout << "Computer::GetCount() : " << Computer::GetCount() << endl;

  Computer two(4,1.6,1000,8,"Pentium N3700");

  cout << "Computer::GetCount() : " << Computer::GetCount() << endl;

  Computer three(6,2.4,2000,32,"Xeon E5645");

  cout << "Computer::GetCount() : " << Computer::GetCount() << endl;
  
  cout << one.ToString() << endl;

  cout << two.ToString() << endl;

  cout << three.ToString() << endl;

  cout << "Greater(one,two) returns: " << Greater(one,two) << endl;
  cout << "Less(one,two) returns: " << Less(one,two) << endl;
  cout << "Equal(one,two) returns: " << Equal(one,two) << endl;

  cout << endl;

  cout << "Greater(one,three) returns: " << Greater(one,three) << endl;
  cout << "Less(one,three) returns: " << Less(one,three) << endl;
  cout << "Equal(one,three) returns: " << Equal(one,three) << endl;

  cout << endl;

  cout << "Greater(three,one) returns: " << Greater(three,one) << endl;
  cout << "Less(three,one) returns: " << Less(three,one) << endl;
  cout << "Equal(three,one) returns: " << Equal(three,one) << endl;

  cout << endl;

  
  


  return 0;
  }




