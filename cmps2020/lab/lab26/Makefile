# Start of the actual Makefile
FLAGS=-Wall -std=c++11


# all is the default case , ours is to build "runme"
all:runme1 runme2	

# clean up all the .o files, log files and other misc stuff
clean:
	rm  -f runme* *~  core *.log *.gch runme1 runme2 


# compile all the .o files into and executable
runme1: $(OBJECTS) main1.cpp
	g++ $(FLAGS) -o runme1 main1.cpp 

runme2: $(OBJECTS) main2.cpp  
	g++ $(FLAGS) -o runme2 main2.cpp


# DO NOT DELETE THIS LINE -- make depend depends on it.




