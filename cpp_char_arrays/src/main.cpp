#include <iostream>

using namespace std;

//EXERCÍCIOS - 1- Create a char string and output it
//2- Output all the chars with a for loop
//3- Output all the chars with a while(true) loop

int main() {

  char text[] = "hello";

  for(int i=0; i<sizeof(text); i++) {
    cout << i << ": " << text[i] << endl;
  }

  int k = 0;

  while(true) {
    if(text[k] == 0)
      break;

    cout << text[k] << flush;

    k++;  
  }

//exercícios
  char myChar[] = "teste";

  cout << myChar << endl;
  for(int i=0; i<sizeof(myChar); i++) {
    cout << i << ": " << myChar[i] << endl;
  }

  int teste2 = 0;

  while(true) {
    if(myChar[teste2] == 0)
    break;

   cout << myChar[teste2] << flush;

   teste2++; 
  }
  return 0;
}