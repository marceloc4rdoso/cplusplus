// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstdlib> // rand()
#include <ctime> // time()
#include <array> // std::array
using namespace std;

int main() {
    array <int, 6 > resultados = {0}; 
    
    srand(time(0));
    
    for (int i = 0; i < 1000; i++){
        int dado = rand() % 6 + 1;
        resultados[dado-1]++;
    }
    for (int i = 0; i < resultados.size(); i++){
        cout << "Numero " << i + 1 << ": " << resultados[i] << endl;
    }

}
