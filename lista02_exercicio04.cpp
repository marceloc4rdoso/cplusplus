#include <iostream>

using namespace std;
/*
4) Uma ótica quer fazer um desconto diferenciado com base na idade do usuário em um
modelo de óculos que custa R$200,00.
O desconto será igual a idade do usuário, porém o desconto mínimo será 10% e o
desconto máximo será de 80%.
Faça um programa que pergunte a idade do usuário e então mostre o valor final do óculos
e o desconto adquirido.
*/
int main(){ 
    
    cout << "Super promoção de óculos!" <<endl;
    
    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;
    
    
    float oculos = 200;
    float desconto = 0.10;
    float valorDesconto = oculos * desconto;
    float valorFinal = oculos - valorDesconto;
    
    
    
    cout << "Desconto: " << desconto * 100 << "%"<<endl;
    cout << "Valor do descontos: " << valorDesconto  << endl;
    cout << "Valor Final do Óculos: " << valorFinal << endl;

    

    system("pause");
}
