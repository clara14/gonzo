#include "functions.h"

// put your function bodies here

int TripleIntPBV(int val)
{
    LogStart(val);
    val *= 3;
    
    LogEndReturning(val);
    return(val);
}

void TripleIntPBP(int *val)
{
    LogStart(val);
    *val *= 3;
    LogEnd(val);
}

void TripleIntPBR(int &val)
{
    LogStart(val);
    val *= 3;
    LogEnd(val);
}

void SwapIntsPBR(int &val1, int &val2)
{
    LogStart(val1,val2);
    swap(val1,val2);
    LogEnd(val1,val2);
}

void SwapIntsPBP(int *val1, int *val2)
{
    LogStart(val1,val2);
    swap(*val1,*val2);
    LogEnd(val1,val2);
}

int getLargerInt(int val1, int val2)
{
    LogStart(val1,val2);
    if(val1 >= val2)
        LogEndReturning(val1);
        return val1;
    if(val2 >= val1)
        LogEndReturning(val2);
        return val2;
}

void setLargerIntPBR(int val1, int val2, int &val3)
{
    LogStart(val1,val2,val3);
    if(val1 >= val2)
        val3 = val1;
    if(val2 >= val1)
        val3 = val2;
    LogEnd(val1,val2,val3);
}

void setLargerIntPBP(int val1, int val2, int *val3)
{
    LogStart(val1,val2,val3);
    if(val1 >= val2)
        *val3 = val1;
    if(val2 >= val1)
        *val3 = val2;
    LogEnd(val1,val2,val3);
}

