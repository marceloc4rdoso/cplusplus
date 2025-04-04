/*
3) Faça um jogo de Pedra, Papel e Tesoura.
No qual você digitará a letra P para jogar Papel, a letra R para jogar Pedra e a letra T para
jogar Tesoura.
Você jogará contra o computador e contabilizara o número de vitórias, empates e derrotas.
*/

#include<iostream>
#include<cstdlib>
#include<ctime>

//srand(0); 
using namespace std;

int main(){
    
    int jogadas;
    cout << "Quantas jogadas? " << endl;
    cin >> jogadas;
    
    for (int i = 0; i < jogadas; i++){
        int jogador;
        //short computador = rand() % 2 + 1;
        int computador = 3;
        
        cout << "Digite 1 para PAPEL! \nDigite 2 para R para PEDRA\nDigite 3 para R para TESOURA" << endl;
        cin >> jogador;
        
        if (jogador == 1 && computador == 2 || 
            jogador == 2 && computador == 3 || 
            jogador == 3 && computador == 1)
            cout << " Jogador Ganhou" << endl;
        else{
            cout << " Computador Ganhou" << endl;
        }
        
    }
    
        
    
    system("pause");
    
}
