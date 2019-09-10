#include <iostream>
#include "Person.h"

using namespace std;

int main() {

  Person person1;
  Person person2("Nat");
  // Person person3("Cai", 26);
  Person person4("Jul", 0);

  cout << person1.toString() << endl;
  cout << person2.toString() << endl;
  // cout << person3.toString() << endl;
  cout << person4.toString() << "; memory location: " << &person4 << endl;
  return 0;
}