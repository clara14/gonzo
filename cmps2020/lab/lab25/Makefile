# Start of the actual Makefile
FLAGS = -Wall -std=c++11

LOG = -D LOGLEVEL=3 # 0-none, 1-low, 2-med, 3 high


 
all:	runme 

clean:
	# clean up old object files and executables
	rm  -f  *~ core *.log *.gch runme grunme test functions.o logger.o Hash_stu.o
 


runme: main.cpp Hash.o Hash_stu.o 
	# compile main.cpp to produce the execuatable runme, link in logger.o and Hash.o
	g++ $(FLAGS) -o runme $(LOG) main.cpp  Hash.o Hash_stu.o
 


Hash_stu.o: Hash.h Hash_stu.cpp
	# compile Hash.cpp to produce the object file Hash.o
	g++ $(FLAGS) -c $(LOG) Hash_stu.cpp 



# DO NOT DELETE THIS LINE -- make depend depends on it.




