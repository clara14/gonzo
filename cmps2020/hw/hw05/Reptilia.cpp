#include "Reptilia.h"

Reptilia::Reptilia()
{
    LogStart();
    LogEnd();
}

Reptilia::Reptilia(string in_genus,string in_species,string in_common_name,string in_movement,string in_noise,bool in_egg_layer, bool in_live_birth)
    : Vertebrata(in_genus, in_species, in_common_name,"cold",in_egg_layer,in_live_birth)
{
    LogStart(in_genus, in_species, in_common_name,in_movement,in_noise,in_egg_layer,in_live_birth);
    blood = "cold";
    movement = in_movement;
    noise = in_noise;
    class_type = "Reptlia";
    
    LogEnd(in_genus, in_species, in_common_name,in_movement,in_noise,in_egg_layer,in_live_birth);
}

string Reptilia::Move()
{
    LogStart();
    LogEndReturning(movement);
    return movement;
}

string Reptilia::MakeNoise()
{
    LogStart();
    LogEndReturning(noise);
    return noise;
}

string Reptilia::ToString()
{
    LogStart();
    ostringstream temp;
    temp << boolalpha << Vertebrata::ToString();
    temp << "movement: " << Move() << endl;
    temp << "nose: " << MakeNoise() << endl;
    LogEndReturning(temp.str());
    return(temp.str());
}

    
