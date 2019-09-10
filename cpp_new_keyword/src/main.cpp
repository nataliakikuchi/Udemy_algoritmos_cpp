#include <iostream>
using namespace std;

class Animal {
  private: 
    string name;

  public:
    Animal() {
      cout << "Animal created" << endl;
    }
    Animal(const Animal& other):
      name(other.name) {
        cout << "Animal created by copying" << endl;
      }

    ~Animal() {
      cout << "Destructor called" << endl;
    } 

    void setName(string name) {
      this->name = name;
    }

    void speak() const {
      cout << "My name is: " << name << endl;
    } 
};

int main() {

  Animal *pointerDog = new Animal();
  pointerDog->setName("Julius");
  pointerDog->speak();
  delete pointerDog;

  cout << sizeof(pointerDog) << endl;
  
  return 0;
}