#pragma once
#include "cmpslib.h"


//SortAscending

//   the first parameter is a pointer to the array to sort, the second is the number of items to sort
//   use the index operator [] to access and modify the elements DO NOT use the Indirection  (*) operator
//   sort the array pointed to by (target) sort (count) elements in the array in descending order
//   use the BUBBLE sort logic below and the logging suggested there as well
//   After calling the function the array should be sorted in ascending order

void SortAscending(int*,int);

//SortDescending
//   the first parameter is a pointer to the array to sort, the second is the number of items to sort
//   use pointer arithmetic and the Indirection operator (*)   DO NOT use the  index operator ([])
//   sort the array pointed to by (target) sort (count) elements in the array in ascending order
//   use the BUBBLE sort logic below and the logging suggested there as well
//   After calling the function the array should be sorted in descending order

void SortDescending(int*,int);

//PrintArray

void PrintArray(int*,int);

//   print out (count) elements from the array pointed to by (target)
//   the format should be like:
//   Position:0 value:4
//   Position:1 value:29
//   Position:2 value:51
//   look at the output of the runnable example if you are unsure
//FillArrayWithRandom

void FillArrayWithRandom(int*,int,int,int);

//   fill the array pointed to by (target) with (count) elements
//   the random numbers generated should be between (min) and (max)
//   you MUST use the CreateRandomNumber function in cmpslib.h




