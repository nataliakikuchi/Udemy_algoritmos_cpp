#include <iostream>

using namespace std;


/*
* == equality test
* ! not equals
* < less than
* > greater than
* <= less than or equal to
* >= greater than or equal to
*/

int main() {
  int value1 = 7;
  int value2 = 4;

  if(value1 < 8) {
    cout << "Condition 1: true" << endl;
  }
  else {
    cout << "Condition 1: false" << endl;
  }

  if(value1 == 7 && value2 < 3) { //condições são avaliadas da esquerda para a direita
    cout << "Condition 2: true" << endl;
  }
  else {
    cout << "Condition 2: false" << endl;
  }

  if(value1 == 7 || value2 < 3) {
    cout << "Condition 3: true" << endl;
  }
  else {
    cout << "Condition 3: false" << endl;
  }

  if(value1 != 8) {
    cout << "Condition 4: true" << endl;
  }
  else {
    cout << "Condition 4: false" << endl;
  }

  if((value1 != 8 && value2 == 10) || value1 < 10) {
    cout << "Condition 5: true" << endl;
  }
  else {
    cout << "Condition 5: false" << endl;
  }

  bool condition1 = (value2 != 8) && (value1 == 10);
  cout << condition1 << endl;

  bool condition2 = value1 < 10;
  cout << condition2 << endl;

  if(condition1 || condition2) {
    cout << "Condition 6: true" << endl;
  }
  else {
    cout << "Condition 6: false" << endl;
  }

  return 0;
}