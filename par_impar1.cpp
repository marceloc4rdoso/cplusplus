
#include <iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>

using namespace std;


int main() {
    
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
        

}
