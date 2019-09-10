#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

using namespace std;

class Person { //classe usada para criar objetos Person com essas características definidas aqui
  private:
    string name; //variável chamada name que vai armazenar um valor do tipo string

  public:
    Person();  
    string toString();
    void setName(string newName);
    string getName();
};

#endif /* PERSON_H_ */