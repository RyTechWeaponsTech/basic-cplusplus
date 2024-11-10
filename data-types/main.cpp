#include <iostream>
#include <string>

using namespace std;

int main()
{
  //declare variables with data types
  int myNum = 26;
  long myLongNum = 300;
  float myFloatNum = 26.1;
  double myDoubleNum = 26778.9;
  char myLetter = 'H';
  bool myBoolean = true;
  string myString = "Hello, students!";

  //print all variable values
  cout << "int: " << myNum << "\t\t" << sizeof(myNum) << " bytes" << endl;

  return 0;
}