// Online C++ compiler to run C++ program online
#include <iostream>
#include <set>
#include <ctime>
#include <cstdlib>

using namespace std;
//Mega Sena

int main() {
    
    set<int> numerosSorteados;
    srand(time(0));
    int aposta;
    
    for(int i = 0; aposta < 6 ; i++){
        cout << "Informe o " << i <<  "º numero apostado";
        cin >> aposta;
    }
    
    while(numerosSorteados.size() < 6){
        numerosSorteados.insert(rand() % 60 + 1);
    }
    
    for(auto numero : numerosSorteados){
        cout <<numero<< " ";
    }
    
    cout <<endl;
    system("pause");
    
}
