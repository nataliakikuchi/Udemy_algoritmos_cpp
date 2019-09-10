#include <iostream>
using namespace std;

class Animal {
  public:
    void speak() { cout << "Oiee" << endl; }
};

class Dog: public Animal {
  public:
    void jump() { cout << "Dog jumping" << endl; }
};

class Doguinho: public Dog {
  public:
    void smile() { cout << "Doguinho smiling" << endl; }
};


int main() {
  Animal a;
  a.speak();

  Dog dog;
  dog.speak();
  dog.jump();

  Doguinho doguinho;
  doguinho.jump();
  doguinho.speak();
  doguinho.smile();
  
  return 0;
}