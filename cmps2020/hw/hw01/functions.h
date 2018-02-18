#pragma once // to avoid multiple includes

#include "cmpslib.h"




// create a function  that returns the middle value of 3 integer parameters

int	MidIntVal( int ,int,int);


// create a function  that returns the middle value of 3 char parameters

char MidCharVal(char, char, char);

// create a function  that determines the middle value of ( int )parameters 2,3 & 4 and stores that value into the 1st parameter

void MiddleInt(int&, int, int, int);

// create a functions that determines the middle value of ( char ) parameters 2,3 & 4 and stores that value into the 1st parameter

void MiddleChar(char&, char, char, char);


// create a function that returns the sum of parameters 1,2,3,4 & 5

int FiveSum(int, int, int, int, int);

// create a function that determines the sum of parameters 2,3,4,5 & 6 and stores that result in parameter 1

void SixSum(int&, int, int, int, int, int);

// create a functions that can sort parameters 1 ,2 ,3  in ascending order

void SortAscend(int&, int&, int&);

// create a functions that can sort parameters 1 ,2 ,3  in descending order

void SortDescend(int&, int&, int&);

