#include <iostream>
using namespace std;

class Machine {
  private:
    int id;

  public:
    Machine(): id(0) { cout << "Mchine. No argument constructor called" << endl; }
    Machine(int id): id(id) { cout << "Machine. No argument constructor called" << endl; }
    void info() {cout << "ID " << id << endl; }
};

class Vehicle: public Machine {
  public:
    Vehicle(int id): Machine(id) { cout << "Vehicle. No argument constructor called" << endl; }
    Vehicle() { cout << "Vehicle. No argument constructor called" << endl; }
};

class Car: public Vehicle {
  public: 
    Car(): Vehicle(888) { cout << "Car. No argument constructor called" << endl; }
};

int main() {
  Car car;
  car.info();
  return 0;
}