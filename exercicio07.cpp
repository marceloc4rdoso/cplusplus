//Faça um programa que mostre em que ano a pessoa terá 80 anos a partir da idade informada pelo usuário. 
//Não esqueça de manter uma boa interface com o usuário!

#include<iostream>

using namespace std;

int main(){
    int idade;
    cout << "Informe sua idade: "; 
    cin >> idade;
    
    int resultado = (80 - idade) + 2025;
    cout << "Em  " << resultado << " você terá 80 anos " << endl;
    
    system("pause");
}
