#include "Person.h"

Person::Person() { //define o método de inicialização do objeto
  name = "Nat";
}

string Person::toString() { //define o método toString para o objeto Person que foi criado pela classe Person
  return "The name is: " + name;
}

void Person::setName(string newName) {
  name = newName;
}

string Person::getName() {
  return name;
}