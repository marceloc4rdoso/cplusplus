// Online C++ compiler to run C++ program online
#include <iostream>
#include<cstdlib>
#include<string>
#include<ctime>

using namespace std;


int main() {
    

   string senha;
   cout << "Digite a senha: " << endl;
   getline(cin, senha);
   
   while (senha != "a senha"){
       cout << "ERROOOOOOUUUUUU!" << endl;
       cout << "Senha incorreta, digite \" a senha \" : " << endl;
       getline(cin, senha);
   }
    cout << "Acesso liberado!" << endl;
    
    system("pause");
}
