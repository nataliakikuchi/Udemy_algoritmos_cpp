#include <iostream>
using namespace std;

/*
* +
* -
* *
* /
* +=
* -=
* %
* %=
* precedence
 */

//EXERCÍCIOS - 1- Take large numbers of seconds and convert it to hours, minutes
//2- Write a for loop that iterates 10,000 times; output a dot (on the same line) every 100 iterations (use mod %)
int main() {

  double value1 = (double)7/2;
  cout << value1 << endl;

  int value2 = (int)7.3;
  cout << value2 << endl;

  int value3 = 8;
  value3 += 1; //value3 = value3 + 1 or value3++;
  cout << value3 << endl;

  int value4 = 10;
  value4 /= 5; //value4 = value4/5;
  cout << value4 << endl;

  int value5 = 12%5;
  cout << value5 << endl;

  double equation = 5.3/4+2*6; //precedence, é o mesmo que (5.3/4)+(2*6); 
  cout << equation << endl;

  //1-

  //converte em horas
  double seconds = 8970.0;
  seconds /= 3600;
  cout << seconds << endl;

  //converte em minutos
  double seconds2 = 9365395.0;
  seconds2 /= 60;
  cout << seconds2 << endl;

  for(int i = 0; i <= 10000; i++) {
    if(i % 100 == 0) {
      cout << "." << flush;

    }
  }

  return 0;
}