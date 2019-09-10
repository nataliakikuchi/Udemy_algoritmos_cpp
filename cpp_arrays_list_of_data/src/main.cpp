#include <iostream>

using namespace std;

int main() {

  cout << "Array of integers" << endl;
  cout << "==================" << endl;

  int values[3] = {88, 99, 101};

  cout << values[0] << endl;
  cout << values[1] << endl;
  cout << values[2] << endl;

   for(int i=0; i<3; i++) {
    cout << "Element of index" << i << ": " << values[i] << endl;
  }

  cout << "Array of doubles" << endl;
  cout << "==================" << endl;

  double numbers[4] = {2.4, 5.6, 7.8, 9.9};

  for(int i=0; i<4; i++) {
    cout << "Element of index" << i << ": " << numbers[i] << endl;
  }

  cout << "Initializing with zero values" << endl;
  cout << "==================" << endl;

  int numberArray[8] = {};

  for(int i=0; i<8; i++) {
    cout << "Element of index" << i << ": " << numbers[i] << endl;
  }

  cout << "Array of Strings" << endl;
  cout << "==================" << endl;

  string texts[] = {"apples", "bananas", "oranges"};

   for(int i=0; i<3; i++) {
    cout << "Element of index" << i << ": " << texts[i] << endl;
  }

  return 0;
}