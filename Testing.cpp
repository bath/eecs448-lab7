#include "Testing.h"
//#include "LinkedListOfInt.h"
using namespace std;

Testing::Testing()
{
}

Testing::~Testing()
{
}

void Testing::runTests()
{
  cout<<"Is empty list size 0? ";
  empty();

  cout<<"Size returns correctly after adding 50 items to the front. ";
  addF();

  cout<<"Size returns correctly after adding 50 items to the back. ";
  addB();

  cout<<"List is in the order it was added in. ";
  listOrd();

  cout<<"Searching for invalid number &  all valid numbers added so far. ";
  search();
  cout<<"\n";

  cout<<"Search returns false on empty list. ";
  search2();

  cout<<"Size returns correctly after add and remove front. ";
  arF();

  cout<<"Size returns correctly after add and remove back. ";
  arB();

  cout<<"Remove front returns false on an empty list. ";
  remFront();

  cout<<"Remove back returns false on an empty list. ";
  remBack();


};

void Testing::empty()
{
  if(L1.isEmpty())
  {
    print(true);
  }
  else
  {
    print(false);
  }
}; //end empty test

void Testing::addF() //works as intended
{
  for (int i = 50; i > 0; i--) {
    L1.addFront(i);
  }

  if(L1.size() == 50)
  {
    print(true);
  }
  else
  {
    print(false);
  }
};

void Testing::addB()
{
  vector<int> vec;

  for (int i = 50; i < 100; i++) {
    L1.addBack(i);
  }

  vec = L1.toVector();
  // for (int i = 0; i < vec.size(); i++) {
  //   cout<<i<<"\n";
  // }
  if(L1.size() == 100)
  {
    print(true);
  }

  else
  {
    print(false);
  }

  //something is messed up here in the adding of back on the list.
  //adding to front instead of the back?
};

void Testing::listOrd()
{
  vector<int> vec;
  vec = L1.toVector();

  bool flag = true;

  for (int i = 0; i < L1.size(); i++)
  {
    if(i != vec[i])
    {
      flag = false;
    }
  }
  print(flag);

}


void Testing::search()
{
  bool flag = true;
  if(L1.search(65468) == false)
  {
    cout<<"[PASSED] ";
  }
  else
  {
    cout<<"[FAILED] ";
  }


  for (int i = 1; i < L1.size(); i++) {
    if(L1.search(i) == false)
    {
      cout<<"didnt find "<<i<<"\n";
      flag = false;
    }
  }

  if(flag == true)
  {
    cout<<"[PASSED]";
  }
  else
  {
    cout<<"[FAILED]";
  }
}

void Testing::print(bool pf)
{
  if(pf == true)
  {
    cout<<"[PASSED]\n";
  }
  else
  {
    cout<<"[FAILED]\n";
  }
}

void Testing::remFront()
{
 LinkedListOfInts S1;
 if(S1.removeFront() == false)
 {
   print(true);
 }
 else
 {
   print(false);
 }
}

void Testing::remBack()
{
  LinkedListOfInts S1;
  if(S1.removeBack() == false)
  {
    print(true);
  }
  else
  {
    print(false);
  }
}

void Testing::arF()
{
  L1.addFront(420);
  L1.removeFront();
  if(L1.size() == 100)
  {
    print(true);
  }
  else
  {
    print(false);
  }
}

void Testing::arB()
{
  L1.addBack(420);
  L1.removeBack();
  if(L1.size() == 100)
  {
    print(true);
  }
  else
  {
    print(false);
  }
}

void Testing::search2()
{
  LinkedListOfInts S1;
  if(S1.search(1) == false)
  {
    print(true);
  }
  else
  {
    print(false);
  }
}
