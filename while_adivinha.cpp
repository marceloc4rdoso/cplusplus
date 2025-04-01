// Online C++ compiler to run C++ program online
#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;


int main() {
    
    srand(123456);    
    
    
   short valor;
   short sorteado = rand() % 10 + 1;
   cout << "Digite um número: " << endl;
   cin >> valor;
   
   while (valor !=sorteado){
       cout << "ERROOOOOOUUUUUU!" << endl;
       cout << "Digite um número: " << endl;
       cin >> valor;
   }
    cout << "Certa a resposta!" << endl;
    
    system("pause");
}
