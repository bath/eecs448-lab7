#	Author: Miller Bath
#	Date: 2019.04.22


#Add needed Test.o
tester: main.o
	g++ -g -Wall -std=c++11 main.o LinkedListOfInts.o -o tester


main.o: main.cpp
	g++ -g -Wall -std=c++11 -c main.cpp


#Add needed Test.o recipe and compiler command
Testing.o: Testing.cpp
	g++ -g -Wall -std=c++11 -c Testing.cpp

#DON'T delete LinkedList.o!
clean:
	rm main.o *.*~ tester
