

#include "cmpslib.h"
struct LOGGER_DATA LGDATA; // create a global instance of this struct .. needed by logging library

#include "DynamicArray.h"


int main()
  {
  LoggerSetUpLog("main1.log");
  if (true)
    {
    cout << "GetObjectCount returns" << DynamicArray::GetObjectCount() << endl;
    DynamicArray  arr(5);


    bool result;

    cout << "arr.ToString() returns " << endl << arr.ToString() << endl;

    result  =arr.SetValue("Homer",0);
    cout << "arr.SetValue(\"Homer\",0) returns " << boolalpha << result << endl;

    result  =arr.SetValue("Marge",1);
    cout << "arr.SetValue(\"Marge\",1) returns " << boolalpha << result << endl;

    result  =arr.SetValue("Bart",2);
    cout << "arr.SetValue(\"Bart\",2) returns " << boolalpha << result << endl;

    result  =arr.SetValue("Lisa",3);
    cout << "arr.SetValue(\"Lisa\",3) returns " << boolalpha << result << endl;


    result  =arr.SetValue("Maggie",4);
    cout << "arr.SetValue(\"Maggie\",4) returns " << boolalpha << result << endl;

    result  =arr.SetValue("Apu",5);
    cout << "arr.SetValue(\"Apu\",5) returns " << boolalpha << result << endl;


    cout << endl;
    cout << "arr.ToString() returns " << endl << arr.ToString() << endl;

    result  =arr.SetValue("Manjula",0);
    cout << "arr.SetValue(\"Manjula\",0) returns " << boolalpha << result << endl;

    cout << "arr.ToString() returns " << endl << arr.ToString() << endl ;


    cout << "GetObjectCount returns " << DynamicArray::GetObjectCount() << endl;

    DynamicArray arr2(5);
    arr2.SetValue("Otto",3);

    cout << "GetObjectCount returns " << DynamicArray::GetObjectCount() << endl;

    cout << "arr as XML:" << endl << CreateXML(arr) << endl;

    cout << "arr2 as XML:" << endl << CreateXML(arr2) << endl;
    }
  return 0;
  }

