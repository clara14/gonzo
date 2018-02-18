# Start of the actual Makefile
FLAGS = -Wall -std=c++11
LOG = -D LOGLEVEL=3 # 0-none, 1-low, 2-med, 3 high


all:	runme1 runme2 

 

clean:
		rm  -f runme* *~  core *.log *.gch  *.o sort1_example sort2_example sort3_example sort4_example 

runme1:	main1.cpp functions.h 
	g++ $(FLAGS) -o runme1 $(LOG) main1.cpp  

runme2:	main2.cpp functions.h 
	g++ $(FLAGS) -o runme2 $(LOG) main2.cpp  

# DO NOT DELETE THIS LINE -- make depend depends on it.




