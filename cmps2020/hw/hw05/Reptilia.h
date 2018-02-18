#pragma once
#include "cmpslib.h"
#include "Vertebrata.h"

class Reptilia : public Vertebrata
{
    protected:
        string movement, noise;

    public:
        Reptilia();
        Reptilia(string,string,string,string,string,bool,bool);

        string Move();
        string MakeNoise();
        string ToString();

};

