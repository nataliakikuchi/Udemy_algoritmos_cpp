#include <iostream>

using namespace std;

int main() {
    
    // do { //Faz uma vez primeiro e depois checa a condição
    //     cout << "Hello" << endl; 
    // } while(value < 8);


    const string password = "hello";
    string input;

    do {
      cout << "Enter your password" << flush;
      cin >> input;

      if(input != password) {
        cout << "Access denied" << endl;

      }

    } while(input != password);
    
      cout << "Password accepeted" << endl;

      return 0;
}