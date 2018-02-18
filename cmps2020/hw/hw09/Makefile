# Start of the actual Makefile
# set a default level for the logging
LOGLEVEL?=3 # 0-none, 1-low, 2-med, 3 high

# this will be the compiler we want to use allong with all the options
# -Wall     ( with all warnings)
# -std=c++11  ( use c++ 2011 version  of the ANSI standards)
# set the macro LOGLEVEL to be defined with a value
COMP=g++ -Wall -std=c++11 -D LOGLEVEL=$(LOGLEVEL) 

# all is the default case , ours is to build "runme"
all:runme1 runme2 runme3 runme4 
	
# clean up all the .o files, log files and other misc stuff
clean:
	rm  -f runme* *~  core *.log *.gch *.o  

# clean up all the .o files and recompile everything
rebuild: clean runme1 

runme1:  main1.cpp    Queue.h 
	$(COMP) -o runme1 main1.cpp  

runme2:  main2.cpp    Queue.h 
	$(COMP) -o runme2 main2.cpp  

runme3:  main3.cpp    Queue.h 
	$(COMP) -o runme3 -D ELEMTYPE=char main3.cpp  

runme4:  main4.cpp    Queue.h 
	$(COMP) -o runme4 -D ELEMTYPE=string main4.cpp  



# DO NOT DELETE THIS LINE -- make depend depends on it.




