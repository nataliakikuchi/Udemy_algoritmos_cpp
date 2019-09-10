#include <iostream>
using namespace std;

class Animal {
  private:
    string name;

  public:
    void setName(string name) {this->name = name;}; //o método setName muda as variáveis instanciadas da classe de cada objeto
    void speak() const {cout << "My name is: " << name << endl;}   //speak não muda nada. Se o método não muda nada, é uma boa prática utilizar const

};

int main() {
  
  const double PI = 3.141592;
  cout << PI << endl;

  Animal animal;
  animal.setName("Julius");
  animal.speak();

  int value = 8;
  // const int * const pointerValue = &value;

  int *pointerValue = &value;

  cout << *pointerValue << endl;

  int number = 11;
  pointerValue = &number; //Error with this: int * const pointerValue = &value;
  *pointerValue = 12; //Error with this: const *pointerValue = &value;

  cout << *pointerValue << endl;

  return 0;
}