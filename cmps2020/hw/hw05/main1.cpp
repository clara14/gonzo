/*
   All rights reserved. No part of this document may be reproduced, distributed,   or transmitted in any form or by any means,    including photocopying,             recording, or other electronic or mechanical methods, without the prior         written    permission of the author, Michael Sarr
 */

#include "cmpslib.h"
struct LOGGER_DATA LGDATA; // create a global instance of this struct .. needed by logging library




#include "Animal.h"
#include "Vertebrata.h"
#include "Reptilia.h"
#include "Mammalia.h"




int main()
  {
  LoggerSetUpLog("main.log");

  // lets create an instance of the Animal class

  LogLow( "\n\n\ntesting Animal");
  cout << "\n\n\ntesting Animal\n";
  Animal Animal1("Felis","Concolor","Mountain Lion");
  cout << "GetFormattedName() returns: " << Animal1.GetFormattedName() << endl;
  cout << "Move() returns: " << Animal1.Move() << endl;
  cout << "MakeNoise() returns: " << Animal1.MakeNoise() << endl;
  cout << "GetType() returns: " << Animal1.GetType()<< endl;
  cout << "ToString() returns: "<< Animal1.ToString() << endl;


  LogLow( "\n\n\ntesting Vertebrata") ;
  cout << "\n\n\ntesting Vertebrata\n";
  // now lets try the Vertebrata class

  Vertebrata  vertibrate1("Felis","Concolor","Mountain Lion","warm",false,true);
  cout << "GetFormattedName() returns: " << vertibrate1.GetFormattedName() << endl;
  cout << "Move() returns: " << vertibrate1.Move() << endl;
  cout << "MakeNoise() returns: " << vertibrate1.MakeNoise() << endl;
  cout << "GetType() returns: " << vertibrate1.GetType()<< endl;
  cout << "ToString() returns: "<< vertibrate1.ToString() << endl;

  // now lets try the Mammalia class

  LogLow("\n\n\ntesting Mammalia");
  cout <<"\n\n\ntesting Mammalia\n";

  Mammalia mammalia1("Felis","Concolor","Mountain Lion","run,walk,pounce","purr,snarl,growl");
  cout << "GetFormattedName() returns: " << mammalia1.GetFormattedName() << endl;
  cout << "Move() returns: " << mammalia1.Move() << endl;
  cout << "MakeNoise() returns: " << mammalia1.MakeNoise() << endl;
  cout << "GetType() returns: " << mammalia1.GetType()<< endl;
  cout << "ToString() returns: "<< mammalia1.ToString() << endl;


// now lets try the Reptilia class
   
  LogLow("\n\n\ntesting Reptilia");
  cout <<"\n\n\ntesting Reptilia\n";

  Reptilia reptilia1("Colubridae","Thamnophis","Garter Snake","swims,slithers,climbs","can produce a hissing sound when excited",false,true);
  cout << "GetFormattedName() returns: " << reptilia1.GetFormattedName() << endl;
  cout << "Move() returns: " << reptilia1.Move() << endl;
  cout << "MakeNoise() returns: " << reptilia1.MakeNoise() << endl;
  cout << "GetType() returns: " << reptilia1.GetType()<< endl;
  cout << "ToString() returns: "<< reptilia1.ToString() << endl;


  LoggerClose();

  return  0;
  }

