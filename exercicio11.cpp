/*
Faça um programa que realize o cadastro de um usuário a partir de seu nome, idade, peso, altura que deverão ser informados pelo usuário e exiba a frase:

Seu nome é ______ e tem ___ caracteres, você tem ___ anos e nasceu no ano de ______. Você mede _____cm, pesa ____ Kg e seu IMC é:____.

Não esqueça de manter uma boa interface com o usuário!

*Fórmula do cálculo do IMC: IMC = Peso ÷ (Altura × Altura)
Peso em KG
Altura em metros

*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    
    string nome;
    cout<< "Informe seu nome: "; 
    getline(cin, nome);
    int caracteresNome = nome.length();
    
    int idade;
    cout << "Sua idade: "; 
    cin >> idade;
    int anoNascimento = (2025 - idade) - 1;
    
    float altura;
    cout << "Sua altura em metros\nEx.: 1.89: "; 
    cin >> altura;
    
    float peso;
    cout << "Seu peso em Kg\nEx.: 78.5 "; 
    cin >> peso;
    
    float imc = peso / (altura * altura);
 
    cout<< "Seu nome " << nome << " tem " << caracteresNome << " caracteres, você tem " << idade << " anos e nasceu no ano de "<< anoNascimento <<endl;
    cout<< "Você mede " << altura << " metros, pesa " << peso << " Kg " << idade << " e seu IMC é "<< imc <<endl;
  
    system("pause");
}
