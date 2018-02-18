# Start of the actual Makefile
FLAGS = -Wall -std=c++11

LOG = -D LOGLEVEL=3 # 0-none, 1-low, 2-med, 3 high

all:	runme1 runme2 runme3 runme4 runme5

clean:
		rm  -f runme* *~  core *.log *.gch DLinkedList_stu.o   

runme1:	main1.cpp    DLinkedList.o DLinkedList_stu.o
	g++ $(FLAGS) -o runme1 $(LOG) main1.cpp    DLinkedList.o

runme2:	main2.cpp    DLinkedList.o DLinkedList_stu.o
	g++ $(FLAGS) -o runme2 $(LOG) main2.cpp    DLinkedList.o

runme3:	main3.cpp    DLinkedList.o DLinkedList_stu.o
	g++ $(FLAGS) -o runme3 $(LOG) main3.cpp    DLinkedList.o

runme4:	main4.cpp    DLinkedList.o DLinkedList_stu.o
	g++ $(FLAGS) -o runme4 $(LOG) main4.cpp    DLinkedList.o

runme5:	main5.cpp    DLinkedList.o DLinkedList_stu.o
	g++ $(FLAGS) -o runme5 $(LOG) main5.cpp    DLinkedList.o

DLinkedList_stu.o: DLinkedList.h DLinkedList_stu.cpp
	g++ $(FLAGS) -c $(LOG) DLinkedList_stu.cpp 


# DO NOT DELETE THIS LINE -- make depend depends on it.




