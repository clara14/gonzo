/*
All rights reserved. No part of this document may be reproduced, distributed,   or transmitted in any form or by any means,    including photocopying,             recording, or other electronic or mechanical methods, without the prior         written    permission of the author, Michael Sarr
*/

#pragma once
#include "cmpslib.h"
#include "Vertebrata.h"


class Mammalia : public Vertebrata
  {
  protected:
    string movement;
    string noise;

  public:
    Mammalia();
    Mammalia(string in_genus, string in_species, string in_common_name,string in_movement, string in_noise);

    string Move();
    string MakeNoise();
    string ToString();

  };




