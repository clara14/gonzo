#pragma once
#include "cmpslib.h"



class DynamicArray
  {
    // private data members
    
         string* data;
         int capacity; 
         static int object_count;

    //publc functions
    
      public:

         DynamicArray(int);
         ~DynamicArray();
         string ToString();
         bool SetValue(string,int);
         static int GetObjectCount();
         friend string CreateXML(DynamicArray&);
  };

string CreateXML(DynamicArray&);
