#include <iostream>
using namespace std;

//Could declare variables here! string numbers[] = {"one", "two", "three"};

void show1(const int nElements, string texts[]) {

  cout << sizeof(texts) << endl; //returns sizeof pointer

  for(int i=0; i<nElements; i++) {
    cout << texts[i] << endl;
  }
}

void show2(const int nElements, string *texts) {
  cout <<sizeof(texts) << endl; //returns sizeof pointer

  for(int i=0; i<nElements; i++) {
    
    cout << texts[i] << endl;
  }
}

void show3(string (&texts)[3]) {
  cout << sizeof(texts) << endl; //returns sizeof pointer

  for(int i=0; i<sizeof(texts)/sizeof(string); i++) {
    cout << texts[i] << endl;
  }
}

char *getMemory() {
  char *pMemory = new char[100];
  return pMemory;
}

void freeMemory(char *pMemory) {
  delete [] pMemory;
}

int main() {

  string texts[] = {"apple", "banana", "mango"};

  cout << sizeof(texts) << endl;

  show3(texts);

  char *pMemory2 = getMemory();
  freeMemory(pMemory2);
  return 0;
}