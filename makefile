#	Author: Miller Bath
#	Date: 2019.04.22


#Add needed Test.o
tester: main.o LinkedListOfInts.o Testing.o
	g++ -g -Wall -std=c++11 main.o LinkedListOfInts.o Testing.o -o tester

main.o: main.cpp LinkedListOfInts.h Node.h Testing.h
	g++ -g -Wall -std=c++11 -c main.cpp

#Add needed Test.o recipe and compiler command
Testing.o: Testing.h Testing.cpp
	g++ -g -Wall -std=c++11 -c Testing.cpp

#DON'T delete LinkedList.o!
clean:
	rm main.o *.*~ tester
