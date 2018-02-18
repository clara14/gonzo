# Start of the actual Makefile
# set a default level for the logging
LOGLEVEL?=3 # 0-none, 1-low, 2-med, 3 high

# this will be the compiler we want to use allong with all the options
# -Wall     ( with all warnings)
# -std=c++11  ( use c++ 2011 version  of the ANSI standards)
# set the macro LOGLEVEL to be defined with a value
COMP=g++ -Wall -std=c++11 -D LOGLEVEL=$(LOGLEVEL)

all:	runme1
clean:
		rm  -f runme* *~  core *.log *.gch *.o 

runme1:	main1.cpp Animal.o Mammalia.o Reptilia.o Vertebrata.o 
	$(COMP) -o runme1 main1.cpp Animal.o Reptilia.o Mammalia.o Vertebrata.o



Animal.o: Animal.h Animal.cpp
	$(COMP) -c Animal.cpp 

Mammalia.o: Mammalia.h Mammalia.cpp
	$(COMP) -c Mammalia.cpp 

Reptilia.o: Reptilia.h Reptilia.cpp
	$(COMP) -c Reptilia.cpp 

Vertebrata.o: Vertebrata.h Vertebrata.cpp
	$(COMP) -c Vertebrata.cpp 


# DO NOT DELETE THIS LINE -- make depend depends on it.




