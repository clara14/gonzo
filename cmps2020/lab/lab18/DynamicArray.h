#pragma once
#include "cmpslib.h"



class DynamicArray
  {
    // private data members
    
         ELEMTYPE* data;
         int capacity; 
    
    //publc functions
    
      public:

         DynamicArray(int val=4);
         ~DynamicArray();
         string ToString();
         bool SetValue(ELEMTYPE,int);
  };
