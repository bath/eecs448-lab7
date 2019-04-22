#include "Testing.h"
//#include "LinkedListOfInt.h"
using namespace std;

Testing::Testing()
{
  //executes run tests to kick off all testing for a linked list.
  //runTests();
}


void Testing::runTests()
{
  cout<<"Is the empty list empty? ";
  empty();
  cout<<"\n";

  out<<"Adding 50 items to the front. ";
  addF();
  cout<<"\n";


};

void Testing::empty()
{
  if(L1.isEmpty() == 1)
  {
    cout<<"[PASSED]";
  }
  else
  {
    cout<<"[FAILED]";
  }
}; //end empty test

void Testing::addF()
{

};
