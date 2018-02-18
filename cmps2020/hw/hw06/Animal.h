/*
All rights reserved. No part of this document may be reproduced, distributed,   or transmitted in any form or by any means,    including photocopying,             recording, or other electronic or mechanical methods, without the prior         written    permission of the author, Michael Sarr
 */
#pragma once
#include "cmpslib.h"

class Animal
  {
  protected:
    string genus,species,common_name;
    string class_type;


  public:
    Animal();
    virtual ~Animal();
    Animal(string ,string,string);
    string GetFormattedName();
    virtual string ToString();
    virtual string Move();
    virtual string MakeNoise();
    string GetType();
  };
