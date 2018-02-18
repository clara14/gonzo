#include "cmpslib.h"
struct LOGGER_DATA LGDATA; // create a global instance of this struct .. needed by logging library

#include "DynamicArray.h"




int main()
{
	LoggerSetUpLog("main1.log");

	DynamicArray  arr(2);

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



	if (true)
	{
		cout << "\n\nCreate a very large DynamicArray\n" ;
		DynamicArray arr2(1000);
		for(auto loop =0;loop < 1000;loop++)
			arr2.SetValue("Chubbs the Wampug",loop);
	}

	cout << "\n\nAfter Create a very large DynamicArray\n" ;


	return 0;
}

