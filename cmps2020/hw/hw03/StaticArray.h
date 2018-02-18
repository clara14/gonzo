#pragma once
#include "cmpslib.h"


// this is the complete class declaration


class StaticArray
  {
    string data[5];

  public:
    StaticArray();
    ~StaticArray();
    string ToString();
    bool SetValue(string,int);

  };
