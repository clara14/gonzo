#pragma once
#include "cmpslib.h"
#include "Vertebrata.h"

class Reptilia : public Vertebrata
{
    protected:
        string movement, noise;

    public:
        Reptilia();
        virtual ~Reptilia();
        Reptilia(string,string,string,string,string,bool,bool);

        virtual string Move();
        virtual string MakeNoise();
        virtual string ToString();

};

