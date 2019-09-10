#include <iostream>
using namespace std;

int main() {
  cout << "Enter your name" << flush;

  string input;

  cin >> input; //cin representa a entrada do usuário

  cout << "You entered" << input << endl;

  cout << "Enter a number " << flush;
  int value;
  cin >> value;
  cout << "You entered " << value << endl;

  return 0;
}