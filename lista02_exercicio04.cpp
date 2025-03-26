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
    
    cout << "Será que você anda de Gratís?" <<endl;
    
    float nota1, nota2;
    cout << "Digite a 1ª nota: "<<endl;
    cin >> nota1;
    cout << "Digite a 2ª nota: "<<endl;
    cin >> nota2;
    
    float media = (nota1 + nota2) / 2;

    if (media < 5){
        cout << "Repovado Gafanhoto ;(\nSua média foi "<< media <<endl;
    }
    else if (media >= 5 && media <= 7){
        cout << "Recuperação Gafanhoto!\nSua média foi "<< media <<endl;
    }    
    else{
        cout << "Aprovado Gafanhoto!\nSua média foi "<< media <<endl;
    }
        
    system("pause");
}
