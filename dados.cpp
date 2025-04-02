#include <iostream>
#include <string>
/*
2) Faça um programa para avaliar qual o número que mais cai em um lance de dois dados
(D6).
O sistema deverá lançar um conjunto de dois dados n vezes seguidas, onde n é o número
de vezes que você informar ao computador.
Após jogar os dados, o sistema deverá informar quantas vezes a soma deu cada um dos
números possíveis: 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 e 12.
*/

using namespace std;

int main() {
    srand(time(0));
    
    int numeroJogadas;
    cout << "Informe o número de jogadas: ";
    cin >> numeroJogadas;
    cout << "Para jogar os dados aperte [J] ";
    string jogada = "J";
    
    for (int i = 0; i < numeroJogadas; i++ ){
        cin >> jogada >> capitalizeString;
        if(jogada == jogada){
            short dado1 = rand() % 6 + 1;
            short dado2 = rand() % 6 + 1;
            cout << "Dado 1: " << dado1 << endl;
            cout << "Dado 2: " << dado2 << endl;
            cout << "Dado 1: ";
            cout << "A jogada resultou em " << dado1 + dado2 << " pontos!" << endl;
            cout << "Aperte [J] para tentar novamente. ";
        }
    }
    cout << "\nBoa jogada!";
}
