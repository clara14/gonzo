#include "cmpslib.h" // all the special functions provided for use in this class

struct LOGGER_DATA LGDATA; // create a global instance of this struct .. needed by logging library



#include "functions.h"

int main()
  {
  LoggerSetUpLog("main1.log");
  int iResult;
  char cResult;
/*  double dResult;*/

  // Test Function1

  cout << "\nTesting Function 1\nIs 0 the middle value of -10,0,10 ? :";

  iResult = MidIntVal(-10,0,10);
  if (iResult ==0)
    {
    cout << "Pass" << endl;
    }
  else
    {
    cout << "Fail" << endl;
    }

  // the library ( in cmpslib.h ) function PF has a bool parmmeter and returns the c string "Pass" or "Fail"

  // so this is the same but shorter

  cout << "\nTesting MidIntVal\nIs the -10 the  middle value of -10,-50,10 ? :";
  iResult = MidIntVal(-10,-50,10);
  cout <<  PF( iResult == -10) << endl;

  cout << "\nTesting MidIntVal\nIs the -50 the  middle value of -10,-50,-110 ? :";
  iResult = MidIntVal(-10,-50,-110);
  cout << PF(iResult == -50)   << endl;

  cout << "\nTesting MidIntVal\nIs the 160 the  middle value of 175,150,160 ? :";
  iResult = MidIntVal(175,150,160);
  cout <<  PF( iResult == 160) << endl;




  // test Function2
  
  cout << "\nTesting MidCharVal\nIs f the middle value of f, z, and a? :";
  cResult = MidCharVal('f','z','a');
  cout << PF(cResult == 'f') << endl;

  cout << "\nTesting MidCharVal\nIs u the middle value of b, u, and x? :";
  cResult = MidCharVal('b','u','x');
  cout << PF(cResult == 'u') << endl;

  cout << "\nTesting MidCharVal\nIs h the middle value of c, t, and h? :";
  cResult = MidCharVal('c','t','h');
  cout << PF(cResult == 'h') << endl;

  // test Function
  
  cout << "\nTesting MiddleInt\nThe middle value of b(100), c(50), and d(200) will be assigned to a\n";
  int a=0, b=100, c=50, d=200;
  MiddleInt(a,b,c,d);
  cout << "The value of a is " << a << endl;

  cout << "\nTesting MiddleInt\nThe middle value of b(60), c(75), and d(150) will be assigned to a\n";
  a=0; b=60; c=75; d=150;
  MiddleInt(a,b,c,d);
  cout << "The value of a is " << a << endl;

  cout << "\nTesting MiddleInt\nThe middle value of b(100), c(250), and d(200) will be assigned to a\n";
   a=0; b=100; c=250; d=200;
   MiddleInt(a,b,c,d);
   cout << "The value of a is " << a << endl;

  // test MiddleChar

   cout << "\nTesting MiddleChar\nThe middle value of h, g, and i will be assigned to mid\n";
    char mid;
    MiddleChar(mid,'h','g','i');
    cout << "The value of mid is " << mid << endl;

    cout << "\nTesting MiddleChar\nThe middle value of b, f, and l will be assigned to mid\n";
    
    MiddleChar(mid,'b','f','l');
    cout << "The value of mid is " << mid << endl;

    cout << "\nTesting MiddleChar\nThe middle value of c, m, and k will be assigned to mid\n";
    
    MiddleChar(mid,'c','m','k');
    cout << "The value of mid is " << mid << endl;

  // test FiveSum

  cout << "\nTesting FiveSum\nIs 600 the sum value of 200, 50, 30, 20, and 300 ? :";
  iResult = FiveSum(200,50,30,20,300);
  cout <<  PF( iResult == 600) << endl;

  cout << "\nTesting FiveSum\nIs -10 the sum value of -50,100,-70,-5, and 15 ? :";
  iResult = FiveSum(-50,100,-70,-5,15);
  cout <<  PF( iResult == -10) << endl;

  cout << "\nTesting FiveSum\nIs 70 the sum value of -50,100,15,3, and 2 ? :";
  iResult = FiveSum(-50,100,15,3,2);
  cout <<  PF( iResult == 70) << endl;


  // test SortAscend

  cout <<"\nTesting SortAscend\nThis will sort parameters A(-5), B(10), and C(4) into ascending order: ";
  int A=-5, B=10, C=4;
  SortAscend(A,B,C);
  cout << "\nA= " << A << "  B= " << B << "  C= " << C << endl;
 

  cout << "\nTesting SortAscend\nThis will sort parameters A(5), B(-10), and C(-4) into ascending order: ";
  A=5; B=-10; C=-4;
  SortAscend(A,B,C);
  cout << "\nA= " << A << "  B= " << B << "  C= " << C << endl;

 cout << "\nTesting SortAscend\nThis will sort parameters A(8), B(10), and C(-4) into ascending order: ";
  A=8; B=10; C=-4;
  SortAscend(A,B,C);
  cout << "\nA= " << A << "  B= " << B << "  C= " << C << endl;
     
  // test SortDescend

  cout << "\nTesting SortDescend\nThis will sort parameters A(-6), B(1), and C(-10) into descending order: ";
  A=-6; B=1; C=10;
  SortDescend(A,B,C);
  cout << "\nA= " << A << "  B= " << B << "  C= " << C << endl;

  cout << "\nTesting SortDescend\nThis will sort parameters A(8), B(-9), and C(-1) into descending order: ";
  A=8; B=-9; C=-1;
  SortDescend(A,B,C);
  cout << "\nA= " << A << "  B= " << B << "  C= " << C << endl;

  cout << "\nTesting SortDescend\nThis will sort parameters A(6), B(55), and C(99) into descending order: ";
  A=6; B=55; C=99;
  SortDescend(A,B,C);
  cout << "\nA= " << A << "  B= " << B << "  C= " << C << endl;


  // comparing doubles can be tricky
  // instead of   if (dResult ==500.5)
  // use the library function VeryClose( double, double)  like so
  // if ( VeryClose(dResult,500.5) )
 


  return 0;
  }

