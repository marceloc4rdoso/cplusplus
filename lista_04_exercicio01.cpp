#include <iostream>
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
    
    string diasSemana [] = {"Segunda-feira",  "Terca-feira", "Quarta-feira", "Quinta-feira","Sexta-feira", "Sabado", "Domingo"};
    
    cout << "Escolha o dia de vendas " << endl;
    cout << "[ 0 ] Segunda-feira  [ 1 ] Terca-feira  [ 2 ] Quarta-feira\n[ 3 ] Quinta-feira. [ 4 ] Sexta-feira  [ 5 ] Sabado\n[ 6 ] Domingo";
    
}
