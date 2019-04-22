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
  void search();
  void search2();
  void print(bool pf);
  void remFront();
  void remBack();
  void arF();
  void arB();

private:
  LinkedListOfInts L1;


};

#endif
