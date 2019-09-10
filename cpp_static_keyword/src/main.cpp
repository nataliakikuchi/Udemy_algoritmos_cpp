#include <iostream>
using namespace std;

// .h header file
class Test  {
  public:
    //Initialization must be done here
    static int const MAX = 99;

  private:
    int id;
    static int count;

  public:
    Test() {
      id = ++count;
    }

    int getId() {
      return id;
    }

    static void showInfo() {
      cout << count << endl;
    }  
};

// .cpp source file
int Test::count = 0;

int main() {
  cout << Test::MAX << endl;
  //Criando objetos a partir da classe
  Test test1;
  cout << "Objeto 1 ID: " << test1.getId() << endl;
  Test test2;
  cout << "Objeto 2 ID: " << test2.getId() << endl;


  Test::showInfo();
  return 0;
}