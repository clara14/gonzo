/*
   All rights reserved. No part of this document may be reproduced, distributed,   or transmitted in any form or by any means,    including photocopying,             recording, or other electronic or mechanical methods, without the prior         written    permission of the author, Michael Sarr
   */

#include "Animal.h"

string Animal::GetType()
  {
  LogStart();
  LogEndReturning(class_type);
  return class_type;
  }

Animal::Animal()
  {
  LogStart();
  class_type="Animal";
  LogEnd();
  }

Animal::Animal(string in_genus,string in_species,string in_common_name)
  {
  LogStart(in_genus,in_species,in_common_name);
  genus=in_genus;
  species=in_species;
  common_name=in_common_name;
  class_type="Animal";
  LogEnd(in_genus,in_species,in_common_name);
  }

string Animal::GetFormattedName()
  {
  LogStart();
  ostringstream oss;
  oss << genus << " " << species << " Common Name:"<<common_name;
  LogEndReturning( oss.str());
  return  oss.str();
  }

string Animal::Move()
  {
  LogStart();
  LogEndReturning("No Movement");
  return "No Movement";
  }

string Animal::MakeNoise()
  {
  LogStart();
  LogEndReturning("No Noise");
  return "No Noise";
  }

string Animal::ToString()
  {
  LogStart();
  ostringstream oss;
  oss << "Name:"      << GetFormattedName() ;
  LogEndReturning( oss.str());
  return oss.str();
  }


