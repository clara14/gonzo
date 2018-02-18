/*
   All rights reserved. No part of this document may be reproduced, distributed,   or transmitted in any form or by any       means, including photocopying,             recording, or other electronic or mechanical methods, without the prior         written permission of the author, Michael Sarr
 */

#include "functions.h"

void SortAscending(int *arr, int count)
{
    LogStart(arr,count);
    for(int oloop=0;oloop<count;oloop++)
    {
        for(int iloop=0;iloop<(count-1);iloop++)
        {
            LogLow("comparing position %s and %s, the values are %s and %s.",
                    iloop,(iloop+1),arr[iloop],arr[iloop+1]);

            if(arr[iloop] > arr[iloop+1])
            {
                LogLow("swapping positions %s and %s where the values are %s and %s.",iloop,(iloop+1),arr[iloop],arr[iloop+1]);
                swap(arr[iloop],arr[iloop+1]);
            }
        }
    }
    LogEnd(arr,count);
}

void SortDescending(int *arr, int count)
{
    LogStart(arr,count);
    for(int oloop=0;oloop<count;oloop++)
    {   
         for(int iloop=0;iloop<(count-1);iloop++)
         {                                     
             LogLow("comparing position %s and %s, the values are %s and %s.",
                     iloop,(iloop+1),arr[iloop],arr[iloop+1]);
             if(arr[iloop] < arr[iloop+1])
             {
                 LogLow("swapping positions %s and %s, where the values are %s and %s", iloop,(iloop+1),arr[iloop],arr[iloop+1]);
                 swap(arr[iloop], arr[iloop+1]);
             }
         }
    }

    LogEnd(arr,count);
}

void PrintArray(int *arr, int count)
{
    LogStart(arr,count);
    for(int loop=0;loop<count;loop++)
    {
        cout << "Position:" << loop << " value:" << arr[loop] << endl;
    }
    LogEnd(arr,count);

}

void FillArrayWithRandom(int *arr, int count, int min, int max)
{
    LogStart(arr,count,min,max);
    for(int loop=0;loop<count;loop++)
    {
        arr[loop] = CreateRandomNumber(min,max);
    }
    LogEnd(arr,count,min,max);
}


