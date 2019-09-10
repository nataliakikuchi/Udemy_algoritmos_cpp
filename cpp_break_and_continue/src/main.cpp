#include <iostream>

using namespace std;

int main() {

//continue
for(int i = 0; i < 5; i++) {
  cout << "i is: " << i << endl;
  if(i == 3) {
    continue;
  }
  cout << "Looping" << endl;
}  


//break
  const string password = "hello";
  string input;

  do {
    cout << "Enter your password" << endl;
    cin >> input;

    if(input == password) {
      break;
    }
    else {
      cout << "Access denied" << endl;
    }

  } while(true);

  cout << "Password accepted" << endl;
  
  return 0;
}