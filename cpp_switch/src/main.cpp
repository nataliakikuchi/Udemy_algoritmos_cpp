#include <iostream>

using namespace std;

int main() {

  int value = 5;

  switch(value) {
  case 4 /* constant-expression */:
    cout << "Value is 4" << endl;/* code */
    break;

  case 5: 
    cout << "Value is 5" << endl;
    break; 
  
  default:
    cout << "No value" << endl;
  }

  return 0;
}