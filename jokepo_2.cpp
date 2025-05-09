/*
3) Faça um jogo de Pedra, Papel e Tesoura.
No qual você digitará a letra P para jogar Papel, a letra R para jogar Pedra e a letra T para
jogar Tesoura.
Você jogará contra o computador e contabilizara o número de vitórias, empates e derrotas.
*/

#include<iostream>
#include<cstdlib>
#include<ctime>


using namespace std;

int main(){
    srand(0); 
    
    int jogadas;
    cout << "Quantas jogadas? " << endl;
    cin >> jogadas;
    
    
    
    int vitórias;
    int derrotas;
    int empates;
    
    
    for (int i = 0; i < jogadas; i++){
        int jogador;
        short computador = rand() % 3;
        
        while(jogador >= 1 || jogador <= 3) {
            cout << "Digite 1 para PAPEL! \nDigite 2 para PEDRA\nDigite 3 para TESOURA" << endl;
            cin >> jogador;
            
            if (jogador == 1 && computador == 2 || 
                jogador == 2 && computador == 3 || 
                jogador == 3 && computador == 1)
                cout << " Jogador Ganhou\n";
            else if (computador == 1 && jogador == 2 || 
                computador == 2 && jogador == 3 || 
                computador == 3 && jogador == 1)
                cout << " Computador Ganhou\n";
            else{
                cout << " Empatou\n";
            }
        }
        cout << "Jogada errada, Escolha 1 para PAPEL!, 2 para PEDRA e 3 para TESOURA";
    }
    
    system("pause");
    
}
