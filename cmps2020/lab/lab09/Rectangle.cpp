#include "Rectangle.h"

Rectangle::Rectangle() : Square()
{
    LogStart();
    SetWidth(0);
    LogEnd();
}

Rectangle::Rectangle(double len, double wid)
{
    LogStart(len,wid);
    SetWidth(wid);
    SetLength(len);
    LogEnd();
}

Rectangle::~Rectangle()
{
    LogStart();
    LogEnd();
}

void Rectangle::SetWidth(double wid)
{
    LogStart(wid);
    if(wid >= 0)
        width = wid;
    else
        wid = 0;

    LogEnd();
}

double Rectangle::Area()
{
    LogStart();
    LogEndReturning(length * width);
    return(length*width);
}

string Rectangle::ToString()
{
    LogStart();
    ostringstream temp;
    temp << "Rectangle: len=" << length << " width=" 
         << width << " area=" << Area() << endl;
    LogEndReturning(temp.str());
    return(temp.str());
}




