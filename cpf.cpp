#include <iostream>
#include <string>
#include <array> // std::array
using namespace std;

/*
CPF
*/

int main() {
    
    string cpf;
    
    cout << "CPF: ";
    cin >> cpf;
    
    short multiplicador = 10;
    
    for(ashort i = 0; i < cpf.length() - 2; i++){
        short digitoNumerico = cpf[i] - '0';
        cout << digitoNumerico << endl;
        multiplicador * digitoNumerico;
        multiplicador--;
    }
    soma = soma * 10;
    soma = soma % 11;
    system("pause")
}   
