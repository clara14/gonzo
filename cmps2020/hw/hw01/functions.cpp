#include "functions.h"


// put your function bodies here



int	MidIntVal( int a,int b,int c)
  {
  LogStart(a,b,c);

  int result =c;
  if ((a - b) * (c - a) >= 0)
    {
    result=a;
    }
  if ((b - a) * (c - b) >= 0)
    {
    result=b;
    }

  LogEndReturning(result);
  return result;
  }


char MidCharVal(char a, char b, char c)
{
    LogStart(a,b,c);

    char result =c;
    if ((a - b) * (c - a) >= 0)
    {
        result=a;
    }
    if ((b - a) * (c - b) >= 0)
    {
        result=b;
    }

    LogEndReturning(result);
    return result;
}

void MiddleInt(int &a, int b, int c, int d)
{
    LogStart(&a,b,c,d);

    int middle = d;
    if((b - c) * (d - b) >= 0)
    {
        middle=b;
    }
    if((c - b) * (d - c) >= 0)
    {
        middle=c;
    }
    LogLow("assigning middle value: %s to a\n", middle);
    a=middle;
    LogLow("middle value %s assigned\n", middle);
    LogEnd(&a,b,c,d);
}

void MiddleChar(char &on, char tw, char thr, char fr)
{
    LogStart(&on,tw,thr,fr);

    char middle = fr;
    if((tw - thr) * (fr - tw) >= 0)
    {
        middle=tw;
    }
    if((thr - tw) * (fr - thr) >= 0)
    {
        middle=thr;
    }
    LogLow("assigning middle char %s to first parameter on\n", middle);
    on=middle;
    LogLow("middle char %s assigned\n", middle);
    LogEnd(&on,tw,thr,fr);
}


int FiveSum(int a, int b, int c, int d, int e) 
{
    LogStart(a,b,c,d,e);
    
    LogEndReturning(a + b + c + d + e);

    return(a + b + c + d + e);
    

}

void SixSum(int &a, int b, int c, int d, int e, int f)
{
    LogStart(&a,b,c,d,e,f);
    LogLow("assigning sum of %s, %s, %s, %s, and %s into a\n",b,c,d,e,f);
    a = (b + c + d + e + f);
    LogLow("sum assigned into a\n");
    LogEnd(&a,b,c,d,e,f);
}

void SortAscend(int &a, int &b, int &c)
{
    LogStart(&a,&b,&c);
 for(int i=0;i<=1;i++)
 {
    if(a > b)
    {
        int temp1 = a;
        a = b;
        b = temp1;
    }
    if(b > c)
    {
        int temp2 = b;
        b = c;
        c = temp2;
    }
 }
    LogEnd(&a,&b,&c); 
}

void SortDescend(int &a, int &b, int &c)
{
    LogStart(&a,&b,&c);
 for(int i=0;i<=1;i++)
 {
    if(a < b)
    {
        LogLow("preparing to switch values a(%s) and b(%s)\n", a, b);
        int temp1 = a;
        a = b;
        b = temp1;
        LogLow("values a and b switched\n");
    }
    if(b < c)
    {
        LogLow("preparing to switch values b(%s) and c(%s)\n", b, c);
        int temp2 = b;
        b = c;
        c = temp2;
        LogLow("values b and c switched\n");
    }
 }
    LogEnd(&a,&b,&c);
}

