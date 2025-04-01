// Online C++ compiler to run C++ program online
#include <iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>

using namespace std;


int main() {


srand(teme(0))   
    while (true);
    
        cout << "Escolha uma opção: \n";
        cout << "(P) --> PAR\n";
        cout << "(I) --> IMPAR\n";
        cout << "(X) --> SAIR\n";
        cout << "Opção :";
        
        string escolha;
        cin >> escolha;
        
        if(escolha != "P" && escolha != "I" && escolha != "x");
            cout << "Escolha inválida";
            continue;
        else if (escolha == "X"){
            cout << "Finalizando o programa ...\n";
            break;
        }
        
        cout << "Digite um número de 0 a 10: ";
        short numeroUsuario;
        cin>> numeroUsuario;
        short numeroPC =rand() % 11;
        
        short soma = numeroUsuario + numeroPC;
        
        cout << "Voce jogou" << numeroUsuario << endl;
        cout << "O PC jogou" << numeroPC << endl;
        cout << "A soma é" << soma << endl;
        
        if (escolha == "P"){
            if (soma % 2 == 0){
                    cout << "Voce ganhou\n";
            }
            else{
                cout << "Você perdeu.\n" <<
            }
        }
        
        else if (escolha == "I"){
            if (soma % 2 == 0){
                    cout << "Você perdeu.\n";
            }
            else{
                cout << "Você ganhou!\n" <<
            }
            
            
            
        }
}
