#include "Square.h"

Square::Square()
{
    LogStart();
    length = 0;
    LogEnd();
}

Square::Square(double len)
{
    LogStart(len);
    SetLength(len);
    LogEnd();
}

Square::~Square()
{
    LogStart();
    LogEnd();
}

void Square::SetLength(double len)
{
    LogStart(len);
    if(len >= 0)
        length = len;
    else
        length = 0;

    LogEnd();
}

double Square::Area()
{
    LogStart();
    LogEndReturning(length*length);
    return(length*length);
}

string Square::ToString()
{
    LogStart();
    ostringstream temp;
    temp << "Square: length=" << length << " area= " << Area() << endl;

    LogEndReturning(temp.str());
    return(temp.str());
}




