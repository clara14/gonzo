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
  LogLow( "\n\n\ntesting Animal") ;
  Animal*  Animal1 = new Animal("Felis","Concolor","Mountain Lion");
  cout << "\n\nTesting Animal class" << endl;
  cout << "GetFormattedName() returns: " << Animal1->GetFormattedName() << endl;
  cout << "Move() returns: " << Animal1->Move() << endl;
  cout << "MakeNoise() returns: " << Animal1->MakeNoise() << endl;
  cout << "GetType() returns: " << Animal1->GetType()<< endl;
  cout << "ToString() returns: "<< Animal1->ToString() << endl;

  delete Animal1;

  LogLow( "\n\n\ntesting Vertebrata") ;
  // now lets try the Vertebrata class
  Animal*   vertibrate1 = new Vertebrata("Felis","Concolor","Mountain Lion","warm",false,true);

  cout << "\n\nTesting Vertebrata class" << endl;
  cout << "GetFormattedName() returns: " << vertibrate1->GetFormattedName() << endl;
  cout << "Move() returns: " << vertibrate1->Move() << endl;
  cout << "MakeNoise() returns: " << vertibrate1->MakeNoise() << endl;
  cout << "GetType() returns: " << vertibrate1->GetType()<< endl;
  cout << "ToString() returns: "<< vertibrate1->ToString() << endl;

  delete vertibrate1;

  //_SSR_
  LogLow("\n\n\ntesting Mammalia") ;
  // now lets try the Mammalia class
  Animal*  Mammalia1= new Mammalia("Felis","Concolor","Mountain Lion","run,walk,pounce","purr,snarl,growl");
  cout << "\n\nTesting Mammalia class" << endl;
  cout << "GetFormattedName() returns: " << Mammalia1->GetFormattedName() << endl;
  cout << "Move() returns: " << Mammalia1->Move() << endl;
  cout << "MakeNoise() returns: " << Mammalia1->MakeNoise() << endl;
  cout << "GetType() returns: " << Mammalia1->GetType()<< endl;
  cout << "ToString() returns: "<< Mammalia1->ToString() << endl;

  delete Mammalia1;


  LogLow("\n\n\ntesting Reptilia");
  // now lets try the Reptilia class

  Animal* Reptilia1 = new Reptilia("Colubridae","Thamnophis","Garter Snake","swims,slithers,climbs","can produce a hissing sound when excited",false,true);
  cout << "\n\nTesting Reptilia class" << endl;
  cout << "GetFormattedName() returns: " << Reptilia1->GetFormattedName() << endl;
  cout << "Move() returns: " << Reptilia1->Move() << endl;
  cout << "MakeNoise() returns: " << Reptilia1->MakeNoise() << endl;
  cout << "GetType() returns: " << Reptilia1->GetType()<< endl;
  cout << "ToString() returns: "<< Reptilia1->ToString() << endl;

  delete Reptilia1;

  //_ESR_

  return  0;
  }

