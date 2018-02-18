# Start of the actual Makefile
FLAGS = -Wall -std=c++11
LOG = -D LOGLEVEL=3 # 0-none, 1-low, 2-med, 3 high


all:	runme 

clean:
		rm  -f runme* *~  core *.log *.gch  *.o 

runme:	main.cpp 
	g++ $(FLAGS) -o runme $(LOG) main.cpp  


# DO NOT DELETE THIS LINE -- make depend depends on it.




