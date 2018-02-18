#pragma once

#include "cmpslib.h" // all the special functions provided for this class



//DO NOT use the same function name for multiple functions
//when you test your fucntions it must be clear which function you are testing
//overlaoding a function name will be ambiguous so for this assignment DO NOT do it
//DO NOT return anything other than void unless it is absolutly necessary

//Create 3 functons that will triple an int value
//each of the funcions will have one parameter, the integer to triple
//one function will be PBV, one function will be PBP and one functions will be PBR 

int TripleIntPBV(int);
void TripleIntPBP(int *);
void TripleIntPBR(int&);

//create two functions that will allow a user to swap two integer values 
//one function will have two PBR parameters and 
//one function will have two PBP parameters

void SwapIntsPBR(int&,int&);
void SwapIntsPBP(int *,int *);

//create 3 funcntions that can be used to determine the larger of 2 integer values
//one function will be PBV adn return the result
//the other two functions will have 2 parameters, the result ( the larger of parametere one and two ) will be stored in the third
//parameter, in one function the third parameter will be PBV and on the other PBP 

int getLargerInt(int,int);
void setLargerIntPBR(int,int,int&);
void setLargerIntPBP(int,int,int *);
