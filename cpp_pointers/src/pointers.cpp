#include <iostream>
using namespace std;

//o * no parâmetro value significa pointer, que contém o endereço da variável dValue
void manipulate(double *value) {
  cout << "2. Value of double in manipulate: " << *value << endl;
  *value = 10.0;
  cout << "3. Value of double in manipulate: " << *value << endl;
}

int main() {

  int nValue = 8;

  int* pnValue = &nValue; //memory location

  cout << "Int value: " << nValue << endl;
  cout << "Pointer to int address: " << pnValue << endl;
  cout << "Int value via pointer: " << *pnValue << endl;

  cout << "=======================================" << endl;

  double dValue = 123.4;

  cout << "1. dValue: " << dValue << endl;
  manipulate(&dValue);
  cout << "4. dValue: " << dValue << endl;


  return 0;
}