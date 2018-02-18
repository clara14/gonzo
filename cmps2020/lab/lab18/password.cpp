#include <iostream>
#include "randomLib.h" 

using namespace std;

#ifndef LENGTH
#define LENGTH 10
#endif

#ifndef TYPE
#error you must define the "TYPE"  ex. "-D TYPE=1" when compiling, 1=alpha, 2=digit,3=alphanumeric,4=alphanumeric with special chars 
#endif

int main()
{


	int length = LENGTH;

	if (length > 20)
		length=20;

	char*  password = new char[length];

	for(int iLoop=0;iLoop<LENGTH ;iLoop++)
	{

#if TYPE == 1  
		password[iLoop]=RandomAlpha();
#endif

#if TYPE == 2 
		password[iLoop]=RandomDigit();
#endif

#if TYPE ==3
		password[iLoop]=RandomAlphaNum();
#endif

#if TYPE ==4
		password[iLoop]=RandomSpecialChar();
#endif

	}

	printf("%s\n",password);
	delete[] password;
	return 0;
}



