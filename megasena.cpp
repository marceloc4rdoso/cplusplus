
#include <iostream>
#include <set>
#include <ctime>
#include <cstdlib>

using namespace std;
//Mega Sena

int main() {
    
    set<int> numerosSorteados;
    srand(time(0));
    while(numerosSorteados.size() < 6){
        numerosSorteados.insert(rand() % 60 + 1);
    }
    
    for(auto numero : numerosSorteados){
        cout <<numero<< " ";
    }
    
    cout <<endl;
    system("pause");
    
}
