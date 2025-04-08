#include <iostream>
#include <string>
#include <array> // std::array
using namespace std;

/*
1) Para Uma loja registra suas vendas diárias da semana em um array de 7 posições
(domingo a sábado). Faça um programa que:
 Peça ao usuário que informe os valores das vendas de cada dia.
 Calcule o total da semana.
 Calcule a média de vendas.
 Informe o dia com maior e menor valor de vendas.
*/

int main() {
    
    string diasSemana [] = {"","Domingo", "Segunda-feira",  "Terca-feira", "Quarta-feira", "Quinta-feira","Sexta-feira", "Sabado"};
    
    int qtdDias = sizeof(diasSemana) / sizeof(diasSemana[0]);
    cout << "Lancamento de Vendas Diárias da Semana!\n";
    cout << "[ 1 ] " <<  diasSemana [1] << " [ 2 ] " <<  diasSemana [2] << "\n[ 3 ] " <<  diasSemana [3] << " [ 4 ] " <<  diasSemana [4] << "\n[ 5 ] " <<  diasSemana [5] << " [ 6 ] " <<  diasSemana [6] << "\n[ 7 ] " <<  diasSemana [7] <<endl;
    
    for (int i = 0; i < qtdDias; i++){
        float valorVenda;
        cout << "Digite a venda de " << diasSemana[i]<<endl;
        cin >> valorVenda;
        
        for (int i = 0; valorVenda; i++ ) {
            cout << "Vendas de " << diasSemana[i] << valorVenda <<endl;
            
        }
        
    }
    
   
    //getline(cin, diaSemana);
    
}   
