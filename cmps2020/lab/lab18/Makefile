# Start of the actual Makefile
COMP = g++
FLAGS = -Wall -std=c++11



all:	randomLib.o makeAlphaPassword makeNumericPassword makeAlphaNumericPassword makeSpecialPassword

clean:
		rm  -f  *.log *.gch  *.o makeAlphaPassword makeNumericPassword makeAlphaNumericPassword makeSpecialPassword


makeAlphaPassword:	password.cpp randomLib.o   
	$(COMP) $(FLAGS) -o makeAlphaPassword -D TYPE=1 password.cpp randomLib.o

makeNumericPassword: password.cpp randomLib.o
	$(COMP) $(FLAGS) -o makeNumericPassword -D TYPE=2 password.cpp randomLib.o

makeAlphaNumericPassword: password.cpp randomLib.o
	$(COMP) $(FLAGS) -o makeAlphaNumericPassword -D TYPE=3 password.cpp randomLib.o

makeSpecialPassword: password.cpp randomLib.o
	$(COMP) $(FLAGS) -o makeSpecialPassword -D TYPE=4 password.cpp randomLib.o

randomLib.o: randomLib.cpp randomLib.h
	$(COMP) $(FLAGS) -c randomLib.cpp

# DO NOT DELETE THIS LINE -- make depend depends on it.




