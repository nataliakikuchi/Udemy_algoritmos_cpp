//arquivo de implementação da classe

#include <iostream>
#include "Dog.h"

using namespace std;

//implementa constructor
Dog::Dog() {
  cout << "Constructor criado" << endl;
  happy = true;
}

//implementa destructor
Dog::~Dog() {
  cout << "Destructor" << endl;
}

void Dog::speak() { //significa que essa função pertence à classe Dog

  if(happy) {
    cout << "Yayyy" << endl;
  }
  else {
    cout << "Ahhh" << endl;
  }
}

void Dog::jump() {
  cout << "I just wanna jump" << endl;
}

void Dog::makeHappy() {
  happy = true;
}

void Dog::makeSad() {
  happy = false;
}