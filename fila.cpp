#include <iostream>
#include <string>
#include <vestor>

int main() {
    // Write C++ code here
    
    vector<strting> fila;
    
    
    while (true){
        cout << "Escolha uma Opção";
        cout <<"(1) Sdicionar um usuário na fila\n"
        cout <<"(2) Atender o primeiro da Fila\n"
        cout <<"(3) LIstar FIla\n"
        cout <<"(4) Sair\n"
        
        cout <<"Opção: \n"
        short escolhaString;
        cin >> escolhaString;
        cin.ignore;
        
        
        else if{
            //
        }
        if(escolha == 1){
            string usuario;
            cout << "Digite o nome do usuário";
            cin >> usuario;
            // Sdicionar um usuário na fila
            fila.push_back(usuario);
        }
        else if(escolha == 2){
            //Atender o primeiro da Fila
        }
        else if(escolha == 3){
            //LIstar FIla
            cout << "Fila de Taendimento: "<< endl;
            for (short i = 0; i < fila.size() > 0){
                cout << i+1 << " --> " fila[i] <<endl;
            }
        cout << "----------------------------"<< endl;
        }
        
    }
}
