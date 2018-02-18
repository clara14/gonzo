#include "cmpslib.h"
struct LOGGER_DATA LGDATA; // create a global instance of this struct .. needed by logging library


#include "functions.h"

// your functions or file includes

int main()
{
LoggerSetUpLog("main1.log");
//_SSR_
	
// test that your functions work properly
// make sure that they all work and do what they are supposed to do



int Arr1[10]={5,10,15,20,25,30,35,40,45,50};
int Arr2[10]={7,11,15,19,23,21,19,17,15,13};
int Arr3[10]={50,45,40,35,30,25,20,15,10,5};

cout << "\nTesting functions using Arr1\n";

SortAscending(Arr1,10);
if(Arr1[0] == 5 && Arr1[9] == 50)
{
    cout << "SortAscending: Passed\n";
    PrintArray(Arr1,10);
}
else
{
    cout << "SortAscending: Failed\n";
    PrintArray(Arr1,10);
}

SortDescending(Arr1,10);
if(Arr1[0]==50 && Arr1[9]==5)
{
    cout << "SortDescending: Passed\n";
    PrintArray(Arr1,10);
}
else
{
    cout << "SortDescending: Failed\n";
    PrintArray(Arr1,10);
}

FillArrayWithRandom(Arr1,10,43,79);
if(Arr1[0] > 42 && Arr1[0] < 80 &&
   Arr1[1] > 42 && Arr1[1] < 80 &&
   Arr1[2] > 42 && Arr1[2] < 80 &&
   Arr1[3] > 42 && Arr1[3] < 80 &&
   Arr1[4] > 42 && Arr1[4] < 80 &&
   Arr1[5] > 42 && Arr1[5] < 80 &&
   Arr1[6] > 42 && Arr1[6] < 80 &&
   Arr1[7] > 42 && Arr1[7] < 80 &&
   Arr1[8] > 42 && Arr1[8] < 80 &&
   Arr1[9] > 42 && Arr1[9] < 80)
{
    cout << "FillArrayWithRandom: Passed\n";
}
else
    cout << "FillArrayWithRandom: Failed\n";


cout << "\nTesting functions using Arr2\n";

SortAscending(Arr2,10);
if(Arr2[0] == 7 && Arr2[9] == 23)
{
        cout << "SortAscending: Passed\n";
            PrintArray(Arr2,10);
}
else
{
        cout << "SortAscending: Failed\n";
            PrintArray(Arr2,10);
}

SortDescending(Arr2,10);
if(Arr2[0]==23 && Arr2[9]==7)
{
        cout << "SortDescending: Passed\n";
            PrintArray(Arr2,10);
}
else
{
        cout << "SortDescending: Failed\n";
}

FillArrayWithRandom(Arr2,10,3,439);
if(Arr2[0] > 2 && Arr2[0] < 440 &&
   Arr2[1] > 2 && Arr2[1] < 440 &&
   Arr2[2] > 2 && Arr2[2] < 440 &&
   Arr2[3] > 2 && Arr2[3] < 440 &&
   Arr2[4] > 2 && Arr2[4] < 440 &&
   Arr2[5] > 2 && Arr2[5] < 440 &&
   Arr2[6] > 2 && Arr2[6] < 440 &&
   Arr2[7] > 2 && Arr2[7] < 440 &&
   Arr2[8] > 2 && Arr2[8] < 440 &&
   Arr2[9] > 2 && Arr2[9] < 440)
{
    cout << "FillArrayWithRandom: Passed\n";
}
else
    cout << "FillArrayWithRandom: Failed\n";

cout << "\nTesting functions using Arr3\n";

SortAscending(Arr3,10);
if(Arr3[0] == 5 && Arr3[9] == 50)
{
        cout << "SortAscending: Passed\n";
            PrintArray(Arr3,10);
}
else
{
        cout << "SortAscending: Failed\n";
            PrintArray(Arr3,10);
}

SortDescending(Arr3,10);
if(Arr3[0]==50 && Arr3[9]==5)
{
        cout << "SortDescending: Passed\n";
            PrintArray(Arr3,10);
}
else
{
        cout << "SortDescending: Failed\n";
}


FillArrayWithRandom(Arr3,10,57,739);
if(Arr3[0] > 56 && Arr3[0] < 740 &&
   Arr3[1] > 56 && Arr3[1] < 740 &&
   Arr3[2] > 56 && Arr3[2] < 740 &&
   Arr3[3] > 56 && Arr3[3] < 740 &&
   Arr3[4] > 56 && Arr3[4] < 740 &&
   Arr3[5] > 56 && Arr3[5] < 740 &&
   Arr3[6] > 56 && Arr3[6] < 740 &&
   Arr3[7] > 56 && Arr3[7] < 740 &&
   Arr3[8] > 56 && Arr3[8] < 740 &&
   Arr3[9] > 56 && Arr3[9] < 740)
{
        cout << "FillArrayWithRandom: Passed\n";
}
else
    cout << "FillArrayWithRandom: Failed\n";

    

return 0;
}





