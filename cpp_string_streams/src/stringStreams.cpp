#include <iostream>
#include <sstream>

using namespace std;

int main() {
  
  string name = "Nat";
  int age = 28;

  stringstream ss;

  ss << "Name is: ";
  ss << name;
  ss << "Age is: ";
  ss << age;

  string info = ss.str();

  cout << info << endl; //cout = console output

  return 0;
}