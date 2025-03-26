#include <iostream>

using namespace std;

//1) Faça um programa que peça um número ao usuário e informe se é Par ou Ímpar.

int main() { 
  int num;

  // pode-se usar ternário 
  cout << "Digite um número: ";
  cin >> num;
  if (num % 2 == 0) {
    cout << "O número é par";
  }
  else{
    cout << "O número é ímpar";
  }
  system("pause");
}
