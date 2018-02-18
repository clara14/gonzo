# Start of the actual Makefile
FLAGS = -Wall -std=c++11
LOG = -D LOGLEVEL=3 # 0-none, 1-low, 2-med, 3 high

all:	runme1 

clean:
		rm  -f runme* *~  core *.log *.gch  *.o 

runme1:	main1.cpp template_functions.h
	g++ $(FLAGS) -o runme1 $(LOG) main1.cpp  

# DO NOT DELETE THIS LINE -- make depend depends on it.




