#include "cmpslib.h"
struct LOGGER_DATA LGDATA; // create a global instance of this struct .. needed by logging library


#ifndef ELEMTYPE
#define ELEMTYPE int 
#endif 

#include "DynamicArray.h"




int main()
{
	LoggerSetUpLog("main1.log");

      DynamicArray   arr;
      if (true  == arr.SetValue(1212,-1) || true == arr.SetValue(1212,5) )
      cout << "FAIL, out of bounds Set is allowed." << endl;
      else
      cout << "Pass, bounds testing seems ok." << endl;

      bool result;

      cout << "arr.ToString() returns " << endl << arr.ToString() << endl;
    
      result  =arr.SetValue(1212,0);
      cout << "arr.SetValue(1212,0) returns " << boolalpha << result << endl;    

      result  =arr.SetValue(3434,1);
      cout << "arr.SetValue(3434,1) returns " << boolalpha << result << endl;    

      result  =arr.SetValue(4545,2);
      cout << "arr.SetValue(4545,2) returns " << boolalpha << result << endl;    

      result  =arr.SetValue(5656,3);
      cout << "arr.SetValue(5656,3) returns " << boolalpha << result << endl;    


      result  =arr.SetValue(6767,4);
      cout << "arr.SetValue(6767,4) returns " << boolalpha << result << endl;    

      result  =arr.SetValue(7878,5);
      cout << "arr.SetValue(7878,5) returns " << boolalpha << result << endl;   
      if (result == true)
		cout << RED("Fail, the default size should not allow this insert ") << endl;

      cout << endl;
      cout << "arr.ToString() returns " << endl << arr.ToString() << endl;

      result  =arr.SetValue(8989,0);
      cout << "arr.SetValue(8989,0) returns " << boolalpha << result << endl;    

      cout << "arr.ToString() returns " << endl << arr.ToString() << endl ;








	return 0;
}
