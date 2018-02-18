#include "Vertebrata.h"

Vertebrata::Vertebrata()
{
    LogStart();
    LogEnd();
}

Vertebrata::Vertebrata(string in_genus,string in_species,string in_common_name,string in_blood,bool in_egg_layer,bool in_live_birth)
    :Animal(in_genus,in_species,in_common_name)
{
    LogStart(in_genus,in_species,in_common_name,in_blood,in_egg_layer,in_live_birth);
    blood = in_blood;
    egg_layer = in_egg_layer;
    live_birth = in_live_birth;
    class_type = "Vertebrata";
    LogEnd(in_genus,in_species,in_common_name,in_blood,in_egg_layer,in_live_birth);
}

string Vertebrata::ToString()
{
    LogStart();
    ostringstream temp;
    temp << boolalpha << Animal::ToString() << endl;
    temp << "blood: " << blood << endl;
    temp << "egg-layer: " << egg_layer << endl;
    temp << "live_birth: " << live_birth << endl;

    LogEndReturning(temp.str());
    return(temp.str());
}


