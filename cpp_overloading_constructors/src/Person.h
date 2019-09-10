
#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
using namespace std;

class Person {
  private: 
    string name;
    int age;
  public:
  //prototypes
    Person();
    Person(string newName) {name = newName; age = 2;};
    // Person(string newName, int newAge);
    Person(string name, int age);
    string toString();
};

#endif