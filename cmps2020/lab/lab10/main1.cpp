#include "cmpslib.h"
struct LOGGER_DATA LGDATA; // create a global instance of this struct .. needed by logging library
#include "functions.h"




int main()
{
	LoggerSetUpLog("main1.log");

	int testarray1[]={ 10,95,20,85,30,75,40,65,50,55,60,45,70,35,80,25,5,15,90,100};
	int testarray2[]={ 10,95,20,85,30,75,40,65,50,55,60,45,70,35,80,25,5,15,90,100};
	int testarray3[]={ 10,95,20,85,30,75,40,65,50,55,60,45,70,35,80,25,5,15,90,100};
	int testarray4[]={ 10,95,20,85,30,75,40,65,50,55,60,45,70,35,80,25,5,15,90,100};
	

	int Sort1_comparisons=0;
	int Sort2_comparisons=0;
	int Sort3_comparisons=0;
	int Sort4_comparisons=0;

	Sort1_comparisons = Sort1(testarray1,20);
	Sort2_comparisons = Sort2(testarray2,20);
	Sort3_comparisons = Sort3(testarray3,20);
	Sort4_comparisons = Sort4(testarray4,20);

    PrintArray(testarray1,20);
    PrintArray(testarray2,20);
    PrintArray(testarray3,20);
    PrintArray(testarray4,20);


	cout << "Sort1 required " << Sort1_comparisons << " comparisons to complete the sort"<< endl;
	cout << "Sort2 required " << Sort2_comparisons << " comparisons to complete the sort"<< endl;
	cout << "Sort3 required " << Sort3_comparisons << " comparisons to complete the sort"<< endl;
	cout << "Sort4 required " << Sort4_comparisons << " comparisons to complete the sort"<< endl;


	return 0;
}




