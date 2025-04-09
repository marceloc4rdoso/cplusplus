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
    
    string diasSemana [] = {"Domingo", "Segunda-feira",  "Terca-feira", "Quarta-feira", "Quinta-feira","Sexta-feira", "Sabado"};
    
    int qtdDias = sizeof(diasSemana) / sizeof(diasSemana[0]);
    cout << "Lancamento de Vendas Diárias da Semana!\n";
    
    float valorVenda;
    float soma;
    float maiorVenda = -1;
    float menorVenda = -1;
    float mediaVenda;
    string maiorDiaVenda, menorDiaVenda;
    
    for (int i = 0; i < qtdDias; i++){
        cout << "Digite a venda de " << diasSemana[i] << ": ";
        cin >> valorVenda;
        //array <float, 7> relacaoVendas = {valorVenda};
        soma += valorVenda;
        
    }
    
    if(valorVenda > valorVenda){
        maiorVenda = valorVenda;
        
    }
    mediaVenda = soma / qtdDias;
    
    cout << "A maior venda da semana foi de R$ " << maiorVenda << endl;
    
    
    cout <<"Soma R$ "<< soma << endl;
    cout <<"Média R$ "<< mediaVenda << endl;
    
    
    
   
    //getline(cin, diaSemana);
    
}   
