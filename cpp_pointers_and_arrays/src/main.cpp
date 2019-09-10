// #include <iostream>

// using namespace std;

// // EXERCÍCIOS - 1-Loop through an array using a pointer, with array element reference syntax
// // 2- Loop through an array by incrementing a pointer
// // 3- Loop through an array, stopping by comparing two pointers

// int main() {

//   string texts[] = {"one", "two", "three"};

//   cout << sizeof(texts)/sizeof(string) << endl;

//   string *pTexts = texts;

//   for(int i = 0; i < sizeof(texts)/sizeof(string); i++) {
//     cout << pTexts[i] << " " << flush;
//   }

//   cout << endl;

//   for(int i = 0; i < sizeof(texts)/sizeof(string); i++, pTexts++) {
//     cout << *pTexts << " " << flush;

//     //pTexts = pTexts + 1; //adicionando um ao pointer o C++ move para o próximo bloco de dados, nesse caso, a próxima string do array
//   }

//   cout << endl;

//   string *pElement = &texts[0];
//   string *pEnd = &texts[2];

//   while(true) {
//     cout << *pElement << " " << flush;

//     if(pElement == pEnd) {
//       break;
//     }
//     pElement++;
//   }

//   return 0;
// }