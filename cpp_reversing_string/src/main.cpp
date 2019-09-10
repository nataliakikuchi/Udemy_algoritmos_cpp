#include <iostream>

using namespace std;

int main() {

  char text[] = "hello there";

  int numberOfChars = sizeof(text) - 1;

  char *pointerStart = text;
  char *pointerEnd = text + numberOfChars - 1;

  while(pointerStart < pointerEnd) {
    char save = *pointerStart;
    *pointerStart = *pointerEnd;
    *pointerEnd = save;

    pointerStart++;
    pointerEnd--;
  }

  cout << text << endl;
  
  return 0;
}