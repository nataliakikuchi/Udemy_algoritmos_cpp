#include <iostream>

using namespace std;

int main() {
  bool bValue = true;

  cout << bValue << endl;

  char cValue = 55; //usado se queremos alocar um número específico de bytes

  cout << (int)cValue << endl; // 55 ASCII table

  cout << "Size of char " << sizeof(char) << endl; //1 byte ou 8 bits

  wchar_t wValue = 'i';
  cout << (char)wValue << endl;
  cout << "Size of wchar_t: " << sizeof(wchar_t) << endl; //4 bytes na memória do computador

  return 0;
}