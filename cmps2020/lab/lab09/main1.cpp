#include "cmpslib.h"
struct LOGGER_DATA LGDATA; // create a global instance of this struct .. needed by logging library


#include "Square.h"
#include "Rectangle.h"



int main()
  {
  LoggerSetUpLog("main1.log");

  //------------------------------------------------------------------


  LogLow("testing the Square class \n");
  if (true)
    {

    cout << "creating a Square named a, use the default constructor\n";
    Square a;
    cout << "a.ToString() returns: " << a.ToString() << endl;

    cout << "use the SetLength function to set a with value of -3.0\n";
    a.SetLength(-3.0);
    cout << "a.ToString() returns: " << a.ToString() << endl;

    cout << "use the SetLength function to set a with value of 3.5\n";
    a.SetLength(3.5);
    cout << "a.ToString() returns: " << a.ToString() << endl;

    cout << "create a Square named b, use the parameterized constructor to create one with the initial value of 44\n";
    Square b(44);
    cout << "b.ToString() returns: " << b.ToString() << endl;
    
    }

  LogLow("finished testing the Square class \n\n\n\n");

  LogLow("testing the Rectangle class \n");
  if (true)
    {
    //test Rectangle class


    cout << "create a Rectangle named c, use the default constructor\n";
    Rectangle c;
    cout << "c.ToString() returns: " << c.ToString() << endl;

    cout << "use the SetLength function to set c with the value -3.0\n";
    c.SetLength(-3.0);
    cout << "c.ToString() returns: " << c.ToString() << endl;

    cout << "use the SetLength function to set c with the value 3.5\n";
    c.SetLength(3.5);
    cout << "c.ToString() returns: " << c.ToString() << endl;

    cout << "use the SetWidth function to set c with a value of -9\n";
    c.SetWidth(-9);
    cout << "c.ToString() returns: " << c.ToString() << endl;

    cout << "use the SetWidth function to set c with a value of 9.5\n";
    c.SetWidth(9.5);
    cout << "c.ToString() returns: " << c.ToString() << endl;

    cout << "create a Rectangle named d, use the parameterized constructor to create it with the initial length of 3 and a width of 9\n";
    Rectangle d(3,9);
    cout << "d.ToString() returns: " << d.ToString() << endl;


    }
  LogLow("finished testing the Rectangle class \n\n\n\n");



  //------------------------------------------------------------------


  ////LoggerClose();

  return 0;
  }
