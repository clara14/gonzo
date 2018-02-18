# Start of the actual Makefile
FLAGS = -Wall -std=c++11

LOG = -D LOGLEVEL=3 # 0-none, 1-low, 2-med, 3 high

all:	runme

clean:
		rm  -f runme* *~  core *.log *.gch SLinkedList_stu.o   

runme:	main.cpp  SLinkedList.o SLinkedList_stu.o
	g++ $(FLAGS) -o runme $(LOG) main.cpp SLinkedList.o SLinkedList_stu.o

SLinkedList_stu.o: SLinkedList.h SLinkedList_stu.cpp
	g++ $(FLAGS) -c $(LOG) SLinkedList_stu.cpp 







# DO NOT DELETE THIS LINE -- make depend depends on it.




