#pragma once
#include "cmpslib.h"
#include "Square.h"
#include <string>


class Rectangle : public Square
{ 
// the rectangle class will contain 


//data members

protected:/**/
  double width;

//functions

public:/**/
  Rectangle();
  /* set width to 0 ( use SetWidth ), length should be set in Square constructor */


  Rectangle(double, double);
  /*
  set length to value one passed in 
  set width to value two passed in 
  use SetLength and SetWidth
  */


  ~Rectangle();
  /* just log start & end */

  void SetWidth(double );
  /* set width to value passed in , if value is less than zero set width to 0 */
 

  double Area();
  /* return the area,  (length * width) */

  string ToString();
  /* return a formatted string like the example */

};/**/


