#include <iostream>
#include "Person.h"

using namespace std;

int main() {
  
  Person person;

  person.setName("Natália");
  
  cout << person.toString() << endl;

  cout << "Name with get method: " << person.getName() << endl;
  return 0;
}