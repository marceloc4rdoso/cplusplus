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
    srand(time(0));
    
    int chute;
    short sorteado = rand() % 10000 + 1;
    
    
    cout << "Chute um número entre 1 e 10000: ";
    
    for (int i = 0; i < TENTATIVAS; i++ ){
        int numeroTentativas;
        
        cin >> chute;
        if (chute != sorteado) {
            numeroTentativas += i;
            if(chute > sorteado)
                cout << "ERRROU:\nTente um número MENOR!\nDigite novamente: ";
            if(chute < sorteado)
                cout << "ERRROU! Tente um MAIOR!\nDigite novamente: ";
        }
        else{
            cout << "ACERTOOOOUUU:\nO Numero " << sorteado << " é o numero correto!\n"; 
            ;
            cout << "ACABOU\nVocê acertou com " << numeroTentativas << " tentativas";
        }
        
    }
    
    cout << "Você esgotou suas 10 tentativas\n";
    
    
    
    
}
