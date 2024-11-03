#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(time(0));
  int number = rand() % 99 + 1;
  string name;
  int userInput;

  cout << "Welcome to the dice game, if you lose you die" << endl;
  for (int i = 0; i <= 30; i++)
  {
    cout << "-";
  }
  cout << endl;

  cout << "Enter your name: ";
  cin >> name;

  cout << "Enter your number: ";
  cin >> userInput;

  cin.ignore();

  if (userInput < number) {
    cout << name << " lost! AI number was " << number << endl;
  }
  else if (userInput > number) {
    cout << name << " win! AI number was " << number << endl;
  }
  else {
    cout << name << " blocked! AI number was " << number << endl;
  }

  return 0;
}