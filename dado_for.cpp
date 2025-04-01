// Online C++ compiler to run C++ program online
#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

string nome = "Marcelo Cardoso de Oliveira";


int main() {
    
    short resultado1 = 0;
    short resultado2 = 0;
    short resultado3 = 0;
    short resultado4 = 0;
    short resultado5 = 0;
    short resultado6 = 0;
    
    srand(123456); // define a seed da aleatoridade
    
    for(int i = 0 ; i < 1000; i++){
        short dado = rand() % 6 + 1;
        
        if (dado == 1) resultado1++;
        else if (dado == 2) resultado2++;
        else if (dado == 3) resultado3++;
        else if (dado == 4) resultado4++;
        else if (dado == 5) resultado5++;
        else if (dado == 6) resultado6++;
    }    
    cout << "Dado 1: " << resultado1 <<endl;
    cout << "Dado 2: " << resultado2 <<endl;
    cout << "Dado 3: " << resultado3 <<endl;
    cout << "Dado 4: " << resultado4 <<endl;
    cout << "Dado 5: " << resultado5 <<endl;
    cout << "Dado 6: " << resultado6 <<endl;

    
}
