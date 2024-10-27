#include <iostream>

using namespace std;
//fungsi utama untuk input output
int main() {
  string name;
  float age;
  int grade;
  string hobby;

  cout << "enter your name: ";
  cin >> name;

  cout << "enter your age: ";
  cin >> age;

  cout << "enter your grade: ";
  cin >> grade;

  cin.ignore();

  cout << "enter your hobby: ";
  getline(cin, hobby) ;

  cout << "\nHi, My name is " << name << ", I am " << age << ", and I'm a " << grade << " grade fixer. My hobby is " << hobby << ". Nice to meet you.\n"; 

  return 0;
}