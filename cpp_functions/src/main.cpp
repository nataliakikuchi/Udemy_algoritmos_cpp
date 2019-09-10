#include <iostream>
using namespace std;

void showMenu() {
  cout << "1. Search" << endl;
  cout << "2. View" << endl;
  cout << "3. Quit" << endl;

}

void numbers() {
  int value = 8;
  if(value >= 8) {
    cout << "The number is correct" << endl;
  }
  else {
    cout << "The number is not 8" << endl;
  }
}

int main() {

  showMenu();
  numbers();

  return 0;
}