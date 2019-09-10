#include <iostream>
using namespace std;

class Animal {
  private:
    string name;

  public:
  //constructor declarado 
    Animal() {
      cout << "Animal created" << endl;
    }  

  //copy constructor
  Animal(const Animal& other) :
    name(other.name) {
  cout << "Animal created by copying" << endl;   
  }

  //destructor
  ~Animal() {
    cout << "Destructor called" << endl;
  }

  //setName method
  void setName(string name) {
    this->name = name;
  }

  //speak method
  void speak() const {
    cout << "My name is: " << name << endl;
  }
  
};

Animal *createAnimal() {
  Animal *pAnimal = new Animal();
  pAnimal->setName("Fofis");
  return pAnimal;
}

int main() {
  Animal *pFrog = createAnimal();
  pFrog->speak();
  delete pFrog;
  return 0;
}