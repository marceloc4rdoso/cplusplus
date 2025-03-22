/*
Faça um programa para converter Reais em Dólares informado pelo usuário:
Escala: R$6,00   🡪   U$1,00
*/

#include<iostream>

using namespace std;

int main(){
    float dolares;
    cout << "Quantos US$ você tem? "; 
    cin >> dolares;
    
    float cotacaoReal = 5;
    float concersao = dolares * cotacaoReal;
    cout << "US$  " << dolares << " Equilave a R$  " << concersao << endl;
    
    system("pause");
}
