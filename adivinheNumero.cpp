#include <iostream>
#include <string>
/*
1) Faça um programa para adivinhar um número de 1 a 10000.
Se você errar o computador deverá responder se é mais ou menos.
Se você errar 10 vezes você perde o jogo.
*/

using namespace std;

const int TENTATIVAS = 10;

int main() {
    
    int chute;
    int sorteado = 7500;
    int numeroTentativas;
    
    for (int i = 0; i < TENTATIVAS; i++ ){
        cout << "Chute um número entre 1 e 10000: ";
        cin >> chute;
        if (chute != sorteado)
            if(chute > sorteado)
                cout << "ERRROU:\nO Numero " << chute << " é MAIOR que o número para advinhar.\nTente um número MENOR!\n";
            else if(chute < sorteado)
                cout << "ERRROU:\nO Numero " << chute << " é MENOR que o número para advinhar.\nTente um número MAIOR!\n";
        else{
                cout << "ACERTOOOOUUU:\nO Numero " << sorteado << " é o numero correto!";   
            }
                 
    }
    
    
}
