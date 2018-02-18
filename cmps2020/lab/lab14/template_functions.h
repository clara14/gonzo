#include <iostream>
#include "cmpslib.h"
using namespace std;


#define LOGLEVEL 3

const char * GetLarger (const char* a, const char* b)
  {
  LogStart(a,b);
  if (strcmp(a,b) <0 )
    {
      {
      LogEndReturning(b);
      return b;
      };
    return b;
    }
    {
    LogEndReturning(a);
    return a;
    };
  return a;
  }

const char * GetSmaller (const char* a, const char* b)
  {
  LogStart(a,b);
  if (strcmp(a,b) >0 )
    {
      {
      LogEndReturning(b);
      return b;
      };
    return b;
    }
    {
    LogEndReturning(a);
    return a;
    };
  return a;

  }


// T GetLarger (T a, T b)
//  return the larger value a or b
template<class T>
T GetLarger(T a, T b)
{
    LogStart(a,b);
    if(a > b)
    {
        LogEndReturning(a);
        return a;
    }
    else
    {
        LogEndReturning(b);
        return b;
    }
}
// T GetSmaller (T a, T b)
//  return the smaller value a or b
template<class T>
T GetSmaller(T a, T b)
{
    LogStart(a,b);
    if(a < b)
    {
        LogEndReturning(a);
        return a;
    }
    else
    {
        LogEndReturning(b);
        return b;
    }
}
// T GetLarger (T a, T b, T c)
// return the larger value a,b or c
// you only need to call the GetLarger for 2 parameters twice , first with a & b then use that result to compare with c
// DO NOT USE < or > in this function
// we want to use this function to work for ( char * ) or constant c strings too you cant use < or > on them
//  {LogEndReturning(GetLarger(a,GetLarger(b,c)));return GetLarger(a,GetLarger(b,c));};
template<class T>
T GetLarger(T a, T b, T c)
{
    LogStart(a,b,c);
    LogEndReturning(GetLarger(a,GetLarger(b,c)));
    return GetLarger(a,GetLarger(b,c));
}

// T GetSmaller (T a, T b, T c)
//  return the smaller value a,b or c
// you only need to call the GetSmaller for 2 parameters twice , first with a & b then use that result to compare with c
// DO NOT USE < or > in this function
//`{LogEndReturning(GetSmaller(a,GetSmaller(b,c)));return GetSmaller(a,GetSmaller(b,c));};
template<class T>
T GetSmaller(T a, T b, T c)
{
    LogStart(a,b,c);
    LogEndReturning(GetSmaller(a,GetSmaller(b,c)));
    return GetSmaller(a,GetSmaller(b,c));
}

// void SwapValues( T & a, T & b)
// swap the values in the two parameters passed in
// the parameters are passed by value
template<class T>
void SwapValues(T &a, T &b)
{
    LogStart(a,b);
    swap(a,b);
    LogEnd(a,b);
}

// void SortArrayAccending (T * start, int count)
// sort an array of type T
// start is a pointer to the beginning , count is the number of elements to sort
template<class T>
void SortArrayAccending(T * start, int count)
{
    LogStart(start,count);
    bool flag;
    for(int oloop=0;oloop<count;oloop++)
    {
        flag=false;
        for(int iloop=0;iloop<(count-1-oloop);iloop++)
        {
            if(start[iloop]>start[iloop+1])
            {
                swap(start[iloop],start[iloop+1]);
                flag=true;
            }
        }
        if(flag==false)
            break;
    }
    LogEnd();
}

// void SortArrayDecending(T * start, int count)
// sort an array of type T
// start is a pointer to the beginning , count is the number of elements to sort
template<class T>
void SortArrayDecending(T* start, int count)
{
    LogStart(start,count);
    bool flag;
    for(int oloop=0;oloop<count;oloop++)
    {
        flag=false;
        for(int iloop=0;iloop<(count-1-oloop);iloop++)
        {
            if(start[iloop]<start[iloop+1])
            {
                swap(start[iloop],start[iloop+1]);
                flag=true;
            }
        }
        if(flag==false)
            break;
    }
    LogEnd();
}
   
// void PrintArray(T * start, int count)
// print an array of type T
// start is a pointer to the beginning , count is the number of elements to print
template<class T>
void PrintArray(T * start, int count)
{
    LogStart(start,count);
    for(int loop=0;loop<count;loop++)
    {
        cout << start[loop] << endl;
    }
    LogEnd();
}



