# Start of the actual Makefile
FLAGS = -Wall -std=c++11

mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))

 
all:	runme 

clean:
	# clean up old object files and executables
	rm  -f  *~ core *.log *.gch runme grunme test functions.o logger.o Hash.o
 
# under normal circumstances we wouldnt split our implemtnation into two files but we do this here so that we can do part in the lab

runme: main.cpp Hash.o  
	g++ $(FLAGS) -o runme main.cpp  Hash.o 

Hash.o: Hash.h Hash.cpp 
	g++ $(FLAGS) -c Hash.cpp 

Hash_stu.o: Hash.h Hash_stu.cpp 
	g++ $(FLAGS) -c Hash_stu.cpp 


# DO NOT DELETE THIS LINE -- make depend depends on it.




