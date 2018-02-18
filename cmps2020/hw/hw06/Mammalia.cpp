/*
   All rights reserved. No part of this document may be reproduced, distributed,   or transmitted in any form or by any means,    including photocopying,             recording, or other electronic or mechanical methods, without the prior         written    permission of the author, Michael Sarr
 */
#include "Mammalia.h"


Mammalia::Mammalia()
  {
  LogStart();
  LogEnd();
  }

Mammalia::~Mammalia()
{
    LogStart();
    LogLow("in the destructor for Mammalia\n");
    LogEnd();
}

Mammalia:: Mammalia(string in_genus, string in_species, string in_common_name,string in_movement, string in_noise)
  :Vertebrata(in_genus,in_species,in_common_name,"cold",false,true)
  {
  LogStart(in_genus, in_species, in_common_name,in_movement, in_noise)
  movement=in_movement;
  noise=in_noise;
  blood       ="warm";
  egg_layer   =false;
  live_birth  =true;
  class_type="Mammalia";

  LogEnd(in_genus, in_species, in_common_name,in_movement, in_noise)
  }



string Mammalia::Move()
  {
  LogStart();
  LogEndReturning( movement);
  return movement;
  }

string Mammalia::MakeNoise()
  {
  LogStart();
  LogEndReturning( noise);
  return noise;
  }


string Mammalia::ToString()
  {
  // call Vertebrata::ToString() to get the text and then add in the lines for movement and noise
  LogStart();
  ostringstream oss;
  oss  << boolalpha<< Vertebrata::ToString();
  oss  <<  "movement:" << movement << endl;
  oss  <<  "noise:" << noise << endl;
  LogEndReturning(oss.str());
  return oss.str();
  }




