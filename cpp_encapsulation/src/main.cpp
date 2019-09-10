#include <iostream>
using namespace std;

class Flower {
  private:
    string name;

  private:  
    string getName() { return name; }

  public:
    Flower(string name): name(name) {}

    void info() { cout << "My name is: " << getName() << endl; }
};

int main() {
  
  Flower flower("Amazing");
  flower.info();

  return 0;
}