#include <iostream>

using namespace std;

int main() {

  int numberDogs = 8; // int aloca um número inteiro na memória
  int number_flowers = 9; 
  int totalNumber = numberDogs + number_flowers; //isso é lido da direita para a esquerda

  cout << "Hello, the number of dogs is: " << numberDogs << endl;
  cout << "And the number of flowers is: " << number_flowers << endl;
  cout << "The total number of dogs and flowers is: " << totalNumber << endl;
  cout << "New dog acquired" << endl;

  numberDogs = numberDogs + 1;

  cout << "New number of dogs is: " << numberDogs << endl;
  
  return 0;
}