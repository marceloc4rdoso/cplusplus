#include <iostream>
#include <string>

using namespace std;
/*
5) Uma empresa pretende fazer um reajuste salarial para os funcionários e precisa da sua
ajuda para criar um programa. Ficou definido os seguintes reajustes:
• Salário Abaixo de R$1.500,00 → Aumento de 25%
• Salário Entre de R$1.500,00 e R$1.999,99 → Aumento de 20%
• Salário Entre de R$2.000,00 e R$2.999,99 → Aumento de 15%
• Salário Entre de R$3.000,00 e R$4.999,99 → Aumento de 10%
• Salário Igual ou Acima de R$5.000,00 → Aumento de 5%
Faça um programa que pergunte ao usuário qual seu Salário Atual e mostre ao usuário:

1. O salário atual;
2. A porcentagem do reajuste;
3. O aumento em R$;
4. O salário final após o reajuste.

*/
int main(){ 
    
    cout << "---------------------------------" <<endl;
    cout << "|      Reajuste anual 2025      |" <<endl;
    cout << "|     Muito bom Gafanhoto...    |" <<endl;
    cout << "---------------------------------" <<endl;
    
    int ano;
    
    float salarioAtual;
    float salarioReajustado;
    
    cout << "Digite seu salário";
    cin >> salarioAtual;

    float faixa1 = (0.25);
    float faixa2 = (salarioAtual >= 1500 && salarioAtual <= 1999.99);
    float faixa3 = (salarioAtual >= 2000 && salarioAtual <= 2999.99);
    float faixa4 = (salarioAtual >= 3000 && salarioAtual <= 4999.99);
    float faixa5 = (salarioAtual >= 5000);

    
    if(salarioAtual < 1500){
        salarioReajustado = salarioAtual * faixa1; 
        cout <<"Seu novo salário é de R$ "<< salarioReajustado << endl;
    }
    
    system("pause");
}
