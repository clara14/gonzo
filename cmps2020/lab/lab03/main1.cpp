
#include "cmpslib.h" // all the special functions provided for this class

struct LOGGER_DATA LGDATA; // create a global instance of this struct .. needed by logging library


#include "functions.h"


int main()
  {
  LoggerSetUpLog("main1.log");
// continue testing the rest of your functions
  int iResult; 
  int input1, input2;
  int *intptr=nullptr;
  int *intptr2=nullptr;
// Function TripleIntPBV
 
  cout << "\nTesting function TripleIntPBV\nIs input 7 tripled to 21? :";
  input1 = 7;
  cout << PF(TripleIntPBV(7) == 21) << endl;
  
// Function TripleIntPBP
  
  cout << "\nTesting function TripleIntPBP\nIs input 6 tripled to 18? :";
  input1=6;
  intptr = &input1;
  TripleIntPBP(intptr);
  cout << PF(*intptr == 18) << endl;

// Function TripleIntPBR

  cout << "\nTesting function TripleIntPBR\nIs input -5 tripled to -15? :";
  input1=-5;
  TripleIntPBR(input1);
  cout << PF(input1 == -15) << endl;
                     
// Function SwapIntsPBR
  
  cout << "\nTesting function SwapIntsPBR\nAre input1(25) and input2(-4) swapped?: ";
  input1=25; input2=-4;
  SwapIntsPBR(input1,input2);
  cout << PF(input1 == -4 && input2 == 25) << endl;
    
// Function SwapIntsPBP

  cout << "\nTesting function SwapIntsPBR\nAre input1(6) and input2(100) swapped?: ";
  input1=6; input2=100;
  intptr = &input1; intptr2 = &input2;
  SwapIntsPBP(intptr,intptr2);
  cout << PF(input1 == 100 && input2 == 6) << endl;

// Function getLargerInt

  cout << "\nTesting function getLargerInt\nIs 80 the larger int between 80 and 79?: ";
  iResult = getLargerInt(80,79);
  cout << PF(iResult == 80) << endl;

// Function setLargerIntPBR

  cout << "\nTesting function setLargerIntPBR\n Is 7 the larger int between 3 and 7? Is it also successfully assigned to third paramter 'res'?: ";
  int res;
  setLargerIntPBR(3,7,res);
  cout << PF(res == 7) << endl;

// Function setLargerIntPBP

  cout << "\nTesting function setLargerIntPBR\n Is -1 the larger int between -8 and -1? Is it also successfully assigned to third paramter 'res'?: ";
  intptr = &res;
  setLargerIntPBP(-8,-1,intptr);
  cout << PF(res == -1) << endl;

  intptr = nullptr;
  intptr2 = nullptr;
  
  return 0;
  }
