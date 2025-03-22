/*
Faça um programa para converter Reais em Dólares informado pelo usuário:
Escala: R$6,00   🡪   U$1,00
*/

#include<iostream>

using namespace std;

int main(){
    float celsius ;
    cout << "Informe a temperatura em Celsius: "; 
    cin >> celsius ;
    
    float Fahrenheit = (celsius * 1.8) + 32;
    cout << celsius << " Cº " << " é  " << Fahrenheit << " Fº  "<< endl;
    
    system("pause");
}
