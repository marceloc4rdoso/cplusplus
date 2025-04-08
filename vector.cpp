// Online C++ compiler to run C++ program online
#include <iostream>
#include <string> // time()
#include <vector> // std::array
using namespace std;

int main() {
    vector<string> nomes = {"Ana", "Carlos", "Beatriz", "Marcelo", "Rafaela", "Mariana", "Juliana", "Ariano", "Guanimedes", "Valter", "Jesse", "Sol Godman"}; 
    
    nomes.erase(nomes.begin()+ 4);
    nomes.push_back("Gabriel");
    
    cout << "Nomes que contenham a letra 'e':\n";
    for (auto nome : nomes){
       for(char c : nome){
           if (tolower(c) == 'e'){
               cout << "- " << nome << "\n";
               break;
           }
       }
    }
    
}
