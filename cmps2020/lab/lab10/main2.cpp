#include "cmpslib.h"
struct LOGGER_DATA LGDATA; // create a global instance of this struct .. needed by logging library
#include "functions.h"




int main()
{
	LoggerSetUpLog("main22.log");

	int testarray1[]={ 5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,100,95};
	int testarray2[]={ 5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,100,95};
	int testarray3[]={ 5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,100,95};
	int testarray4[]={ 5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,100,95};


	int Sort1_comparisons=0;
	int Sort2_comparisons=0;
	int Sort3_comparisons=0;
	int Sort4_comparisons=0;


	Sort1_comparisons = Sort1(testarray1,20);
	Sort2_comparisons = Sort2(testarray2,20);
	Sort3_comparisons = Sort3(testarray3,20);
	Sort4_comparisons = Sort4(testarray4,20);

	cout << "Sort1 required " << Sort1_comparisons << " comparisons to complete the sort"<< endl;
	cout << "Sort2 required " << Sort2_comparisons << " comparisons to complete the sort"<< endl;
	cout << "Sort3 required " << Sort3_comparisons << " comparisons to complete the sort"<< endl;
	cout << "Sort4 required " << Sort4_comparisons << " comparisons to complete the sort"<< endl;


	return 0;
}




