//This class will be called upon to run all the tests for this lab.

#ifndef TEST_H
#define TEST_H

#include "LinkedListOfInts.h"
#include <iostream>
#include <string.h>


using namespace std;

class Testing
{
public:
  Testing(); //default constructor
  void runTests();
  void empty();
  void addF();
  void addB();
private:
  LinkedListOfInts L1;


};

#endif
