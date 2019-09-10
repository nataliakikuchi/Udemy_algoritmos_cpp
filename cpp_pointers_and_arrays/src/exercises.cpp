#include <iostream>

using namespace std;

int main() {
  string fruits[] = {"strawberry", "mango", "lemmon", "grape"};

  cout << sizeof(fruits)/sizeof(string) << endl;

  string *pointerFruits = fruits;

  for(int i = 0; i < sizeof(fruits)/sizeof(string); i++) {
    cout << pointerFruits[i] << " " << flush;
  }

  cout << endl;

  for(int i = 0; i < sizeof(fruits)/sizeof(string); i++, pointerFruits++) {
    cout << *pointerFruits << " " << flush;
  }

  cout << endl;

  string *pointerElement = &fruits[0];
  string *pointerEnd = &fruits[3];

  while(true) {
    cout << *pointerElement << " " << flush;

    if(pointerElement == pointerEnd) {
      break;
    }
    pointerElement++;
  }
  return 0;
}