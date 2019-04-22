/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "Testing.h"

int main(int argc, char** argv)
{
	//Example of declaring a LinkedListOfInts
	LinkedListOfInts testableList;

	//You won't do all the tests in main; that's what your Test class will be for
	//Example:
	//TestSuite myTester;
	//myTester.runTests();
	cout<<"\n------------------------------------------\n";
	Testing T1;
	T1.runTests();
	//std::cout << "Running...\nAnd we're done.\nGoodbye.\n";
	cout<<"------------------------------------------\n\n";
	return (0);

}
