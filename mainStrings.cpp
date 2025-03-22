#include <iostream>
#include <string>

int main()
{

    std::cout <<"Digite seu nome: ";
    
    std::string nome;
    std::getline(std::cin, nome);
    int numeroCaracteres = nome.length();
    
    std::cout <<  "Seja bem vindo! " << nome;
    
    std::cout <<" Seu nome tem " <<numeroCaracteres << " caracteres!\n";
   
    
    

    
    system("pause"); 
    /*
    int idade;
    std::cout <<"Digite sua idade: ";
    std::cin >> idade;
    std::cout <<"Você tem " << idade << " anos!\n";
    
    system("pause");    
    */
}


