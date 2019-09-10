#include <sstream>
#include "Person.h"

//constructor que inicializa
Person::Person() {
  name = "undefined";
  age = 0;
}

// Person::Person(string newName, int newAge) {
//   name = newName;
//   age = newAge;
// }

//implementação do constructor
Person::Person(string name, int age) //: name(name), age(age)dessa forma inicializamos as variáveis e não precisamos do this 
{
  this->name = name; //É o mesmo que string newName name = newName. this variável que contém a memory location do objeto. Memory address
  this->age = age;
}

//this->name = name  o primeiro name é a propriedade da classe Person e o segundo name é o que vou passar por parâmetro e que será o valor da propriedade

string Person::toString() {
  stringstream ss;

  ss << "Name: ";
  ss << name;
  ss << "; Age: ";
  ss << age;

  return ss.str();
}

//quando criamos um objeto a partir de uma classe, dizemos que estamos instanciando essa classe