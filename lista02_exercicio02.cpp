#include <iostream>

using namespace std;
/*
2) Uma empresa de transporte público quer fazer um sistema automático para identificar se o
usuário terá gratuidade no transporte ou não. Faça um programa que pergunte a idade do
usuário, se ele tiver 65 anos ou mais irá informar que ele tem gratuidade no transporte.
*/
int main() { 
    
    cout << "Será que você anda de Gratís?" <<endl;
    
    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;
    if (idade >= 65) {
        cout << "Eba Gafanhoteo Senior! Você tem gratuidade no transporte ~público de Uberlêndia!" <<endl;
    }
    else{
        cout << "Você deve pagar seu transporte pequeno gafanhoto!";
    }
    system("pause");
}
