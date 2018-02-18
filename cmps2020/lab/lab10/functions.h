#pragma once
#include "cmpslib.h"


int Sort1(int *array, int count)
{
    LogStart(array,count);
    int comp=0;
    for(int oloop=0;oloop<count;oloop++)
    {
        for(int iloop=0;iloop<(count-1);iloop++)
        {
            comp++;
            if(array[iloop]>array[iloop+1])
                swap(array[iloop],array[iloop+1]);
        }
    }
	LogEndReturning(comp);
    return comp;
}


int Sort2(int *array, int count)
{
    LogStart(array,count);
    int comp=0;
    for(int oloop=0;oloop<count;oloop++)
    {
        for(int iloop=0;iloop<(count-1-oloop);iloop++)
        {
            comp++;
            if(array[iloop]>array[iloop+1])
                swap(array[iloop],array[iloop+1]);
        }
    }

    LogEndReturning(comp);
    return comp;
	
} 


int Sort3(int *array, int count)
{
     LogStart(array,count);
     int comp=0;
     bool flag;
     for(int oloop=0;oloop<count;oloop++)
     {
         flag=false;
         for(int iloop=0;iloop<(count-1-oloop);iloop++)
         {
          comp++;
          if(array[iloop]>array[iloop+1])
          {
             swap(array[iloop],array[iloop+1]);
             flag=true;
          }
         }
        if(flag == false)
            break;
     }

     LogEndReturning(comp);
     return comp;
}


int Sort4(int *array, int count)
{
     LogStart(array,count);
     int comp=0;
     bool flag;

     for(int oloop=0;oloop<count;oloop++)
     {
         flag=false;
         for(int iloop=(oloop+1);iloop<count;iloop++)
         {
             comp++;
             if(array[oloop]>array[iloop])
             {
                 swap(array[oloop],array[iloop]);
                 flag=true;
             }
             
         }
         if(flag == false)
             break;
     }


     LogEndReturning(comp);
     return comp;
        
}





void PrintArray(int* array,int count)
{
    LogStart(array,count);
    cout << "Array: ";
    for(int loop=0;loop<count;loop++)
    {
        cout << array[loop];
        if(!(loop == (count-1)))
            cout << ",";
    }
    cout << endl;

    LogEnd(array,count);

        
}







