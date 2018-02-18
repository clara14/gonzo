
#include "cmpslib.h"
struct LOGGER_DATA LGDATA; // create a global instance of this struct .. needed by logging library



#include "DynamicArray.h"


int main()
{
	LoggerSetUpLog("main2.log");

	DynamicArray  arr(5);

	bool result;
    /* 
    the Dynamic array better have a default size of 5
	Apu should NOT get entered but the rest should
	*/
    

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

      if (result == true)
        cout << RED("Fail, the default size should not allow this insert ") << endl;

	cout << endl;

	cout << "arr.ToString() returns " << endl << arr.ToString() << endl;

	result  =arr.SetValue("Manjula",0);
	cout << "arr.SetValue(\"Manjula\",0) returns " << boolalpha << result << endl;    

	cout << "arr.ToString() returns " << endl << arr.ToString() << endl ;

	return 0;
}

