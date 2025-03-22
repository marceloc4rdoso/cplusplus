//Monte um programa que exiba a soma de dois números inteiros informados pelo usuário. 

#include<iostream>

using namespace std;

int main()
{
    int num1;
    cout << "Digite um número: "; 
    cin >> num1;
    int num2;
    cout << "Digite outro número: "; 
    cin >> num2;
    int soma = num1 + num2;
    //cout << soma << endl;
    cout << "A soma de " << num1 << " + " << num2 << " é " << soma  << endl;
    system("pause");
    
}
