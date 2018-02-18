#pragma once
#include "cmpslib.h"
#include "Animal.h"

class Vertebrata : public Animal
{
    protected:
        string blood;
        bool egg_layer, live_birth;

    public:

        Vertebrata();
        ~Vertebrata();
        Vertebrata(string,string,string,string,bool,bool);
        string ToString();

};


