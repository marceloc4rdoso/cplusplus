// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;

string playerOne;
string playerTwo;

int main() {
    
    srand(0);
    // Write C++ code here
   cout << "Insira o nome do 1º jogador: ";
   getline(cin,playerOne);
   cout << "Insira o nome do 2º jogador: ";
   getline(cin,playerTwo);
   
   int startPointsPlayOne = 10; 
   int startPointsPlayTwo = 10;

   cout << "----" << " Starting Points " << "----\n";
   cout << playerOne <<" | "<< startPointsPlayOne << " X " << startPointsPlayTwo <<" | " << playerTwo << endl;
   
   int gameRound = 3;
   // golpes
   int headbutt;
   int punch;
   
   cout << "Escolha o golpe!\nH para cabeçada e P para soco";
   
   while(gameRound > 0){
       //
   }
    
    for(int i = 0 ; i < gameRound; i++){
        short punch = rand() % 6 + 1;
        
    
    }   
   
   
}
