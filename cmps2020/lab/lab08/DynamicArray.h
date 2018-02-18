#pragma once
#include "cmpslib.h"



class DynamicArray
  {
    // private data members
    
         string* data;
         int capacity; 
    
    //publc functions
    
      public:

         DynamicArray(int);
         ~DynamicArray();
         bool operator == (const DynamicArray&);
         DynamicArray& operator = (const DynamicArray&);
         DynamicArray operator + (const DynamicArray&);
         string ToString();
         bool SetValue(string,int);
  };
