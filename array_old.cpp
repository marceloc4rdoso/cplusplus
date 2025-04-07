// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstdlib>
#include <ctime> // rand()
#include <array> // time()
using namespace std;

int main() {
    int resultados [6] = {0}; 
    
    srand(time(0));
    
    for (int i = 0; i < 1000; i++){
        int dado = rand() % 6 + 1;
        resultados[dado-1]++;
    }
    for (int i = 0; i < 6; i++){
        cout << "Numero " << i + 1 << ": " << resultados[i] << endl;
    }

}
