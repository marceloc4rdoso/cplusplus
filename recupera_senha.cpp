#include <iostream>
#include <locale>
#include <string>
using namespace std;
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    string nome;

    cout << "Digite seu nome: ";
    getline(cin, nome);
    if (nome == "Daniel") {
    cout << "Olá Daniel" << endl;
     cout << "Sua senha é senaisp123" << endl;
    }
    else if (nome == "Jorge") {
        cout << "Olá Jorge" << endl;
        cout << "Sua senha é 123456" << endl;
    }
    else {
        cout << "Você não é o Daniel nem o Jorge" << endl;
    }
    system("pause");
}