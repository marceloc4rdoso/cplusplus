/*
Um professor gostaria um programa para auxiliá-lo a montar a média final de seus alunos. Sabendo que são 2 notas no ano,
monte um programa que através das notas informadas pelo usuário mostre a sua média final.
Não esqueça de manter uma boa interface com o usuário!
*/

#include<iostream>

using namespace std;

int main(){
    float nota1;
    cout << "Primeira nota: "; 
    cin >> nota1;
    
    float nota2;
    cout << "Segunda nota: "; 
    cin >> nota2;
    
    float media = (nota1 + nota2) / 2;
    cout << "Primeira Nota  " << nota1 << "\nSegunda Nota  " << nota2 << endl;
    cout << "Sua média é  " << media << endl;
    
    system("pause");
}
