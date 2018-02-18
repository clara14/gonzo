# Start of the actual Makefile
FLAGS = -Wall -std=c++11

LOG = -D LOGLEVEL=3 # 0-none, 1-low, 2-med, 3 high

all:	runme1 runme2 runme3 runme4 

clean:
		rm  -f runme* *~  core *.log *.gch *.o   

runme1:	main1.cpp  intSLinkedList.o print.h main1.cpp
	g++ $(FLAGS) -o runme1 $(LOG) -D ELEMTYPE=int main1.cpp intSLinkedList.o

runme2:	main1.cpp  stringSLinkedList.o print.h
	g++ $(FLAGS) -o runme2 $(LOG) -D ELEMTYPE=string main1.cpp stringSLinkedList.o

runme3:	main3.cpp  intSLinkedList.o print.h
	g++ $(FLAGS) -o runme3 $(LOG) -D ELEMTYPE=int main3.cpp intSLinkedList.o

runme4:	main4.cpp  stringSLinkedList.o print.h
	g++ $(FLAGS) -o runme4 $(LOG) -D ELEMTYPE=string main4.cpp stringSLinkedList.o


intSLinkedList.o: SLinkedList.h SLinkedList.cpp print.h
	g++ $(FLAGS) -c $(LOG) -D ELEMTYPE=int  -o intSLinkedList.o SLinkedList.cpp

stringSLinkedList.o: SLinkedList.h SLinkedList.cpp print.h
	g++ $(FLAGS) -c $(LOG) -D ELEMTYPE=string  -o stringSLinkedList.o SLinkedList.cpp



# DO NOT DELETE THIS LINE -- make depend depends on it.




