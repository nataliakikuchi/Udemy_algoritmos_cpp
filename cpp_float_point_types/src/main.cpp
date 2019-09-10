#include <iostream>
#include <iomanip> //The header <iomanip> is part of the Input/output library of the C++ Standard Library. It defines the manipulator functions resetiosflags() , setiosflags() , setbase() , setfill() , setprecision() , and setw() . These functions may be conveniently used by C++ programs to affect the state of iostream objects.

using namespace std;

int main() {

  //mostram quantos bytes ocupam em nosso sistema
  
  float fValue = 67.4;

  cout << sizeof(float) << endl;
  cout << setprecision(20) << fixed << fValue << endl;

  double dValue = 67.4;
  cout << setprecision(20) << fixed << dValue << endl;

  long double lValue = 123.456789; //retorna um resultado muito preciso
  cout << setprecision(20) << fixed << lValue << endl;
  cout << "Size of long double: " << sizeof(lValue) << endl; // 16 bytes da memória do computador

  return 0;
}