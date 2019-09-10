#include <iostream>

using namespace std;

int main() {
  cout << "1,\tAdd new record" << endl;
  cout << "2,\tDelete record" << endl;
  cout << "3, \tView record" << endl;
  cout << "4, \tSearch record" << endl;
  cout << "5, \tQuit" << endl;

  cout << "Enter your selection" << flush;

  int value;
  cin >> value;

  // if(value < 3) {
  //   cout << "Insuficient informations to use these options" << endl;
  // }
  // else {
  //   cout << "Information sufficient" << endl;
  // }

  if(value == 1) {
    cout << "oi" << endl;
  } else if(value == 2) {
    cout << "oi2" << endl;
  } else if(value == 3) {
    cout << "oi3" << endl;
  } else if(value == 4) {
    cout << "oi4" << endl;
  }
  else {
    cout << "tchau" << endl;
  }


  return 0;
}