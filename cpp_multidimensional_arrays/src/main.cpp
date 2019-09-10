#include <iostream>

using namespace std;

int main() {
  
  string animals[2][3] = { //2 linhas e 3 colunas 
    {"dog", "fox", "cat"},
    {"parrot", "fish", "elephant"}
  }; 

  for(int i=0; i<2; i++) { // i = index do array
    for(int j=0; j<3; j++) { // j = elemento do index do array
      cout << animals[i][j] << " " << flush;
    }

    cout << endl;
  }
  return 0;
}