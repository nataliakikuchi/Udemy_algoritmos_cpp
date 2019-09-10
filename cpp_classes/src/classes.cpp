#include <iostream>
#include "Dog.h" //entre aspas pq é um header file local
#include "Turtle.h"

using namespace std;

int main() {
  Dog dog; //nome da classe (template para Dog) e nome da variável (dog específico, chamado objeto), onde as funções são agrupadas
  dog.speak(); //assim acessamos as funções
  dog.jump();
  dog.makeHappy();

  Dog bob; //crio outro Dog, instanciando um outro Dog da classe Dog
  bob.makeHappy();
  bob.speak();

  {

    Turtle turtle;
    turtle.example();
  }

  return 0;
}