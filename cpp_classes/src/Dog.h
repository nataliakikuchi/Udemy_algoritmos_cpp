#ifndef DOG_H_
#define DOG_H_

//A ideia das classes é agrupar métodos
class Dog {

private: 
  bool happy = true; //usamos variáveis para definir o estado dos objetos (humor, ). Variável instanciada

public: //torna os métodos acessíveis em outros arquivos. Funções dentro de classe são chamadas de MÉTODOS. Em JS usamos extend

  
  //prototypes
  void makeHappy();
  void makeSad();
  void speak(); 
  void jump();

  //define constructor
  Dog();

  //define destructor
  ~Dog();
};



#endif /* */

