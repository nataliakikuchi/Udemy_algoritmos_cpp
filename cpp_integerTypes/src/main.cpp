#include <iostream>
#include <limits.h>

using namespace std;

int main() {
  int value = 888;
  cout << value << endl;

  cout << "Max int value: " << INT_MAX << endl; //mostra o máximos que podemos armazenar em uma variável int
  cout << "Min int value: " << INT_MIN << endl;

  long int lValue = 23453456;
  cout << lValue << endl;

  short int sValue = 23434;
  cout << sValue << endl;

  cout << "Size of int " << sizeof(int) << endl; //isso retorna 4, que quer dizer 4 bytes

  cout << "Size of short int " << sizeof(short int) << endl;

  unsigned int uValue = 2345;
  cout << uValue << endl;

  return 0;
}