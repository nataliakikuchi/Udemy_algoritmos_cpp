#include <iostream>

using namespace std;

int main() {
  
  int values[] = {3, 8 ,7, 4};

  cout << sizeof(values) << endl; //16
  cout << sizeof(int) << endl; //4

  for(int i=0; i < sizeof(values)/sizeof(int); i++) {
    cout << values[i] << " " << flush;
  }

  cout << endl;

  return 0;
}