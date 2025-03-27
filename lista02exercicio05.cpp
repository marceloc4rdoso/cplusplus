#include <iostream>

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
    cout << "|     Muito bom Gafanhote...    |" <<endl;
    cout << "---------------------------------" <<endl;
    
    float salarioAtual;
    float reajuste = 0.25;
    
    float aumento;
    float salarioFinal;
    
    cout << "Qual o seu salário atual? ";
    cin >> salarioAtual;
    
    if(salarioAtual < 1500){
        aumento = salarioAtual * reajuste;
    }
    
    else if(salarioAtual >= 1500 && salarioAtual <= 1999.99){
        reajuste = (reajuste - 0.05);
        aumento = salarioAtual * reajuste;
    }
    
    else if(salarioAtual >= 2000 && salarioAtual <= 2999.99){
        reajuste = (reajuste - 0.10);
        aumento = salarioAtual * reajuste;
    }
    
    else if(salarioAtual >= 3000 && salarioAtual <= 4999.99){
        reajuste = (reajuste - 0.15);
        aumento = salarioAtual * reajuste;
    }
    else{
        reajuste = (reajuste - 0.20);
        aumento = salarioAtual * reajuste;
    }
    
    salarioFinal = salarioAtual + aumento;
    cout << "---------------------------------" <<endl;
    cout << "Salário atual; " << salarioAtual<<endl;
    cout << "Percentual de reajuste: " << reajuste *100 << "%" << endl;
    cout << "Aumento em R$; " << aumento << endl;
    cout << "Salário final. R$; " << salarioFinal << endl;
    cout << "---------------------------------" <<endl;
    
    system("pause");
}
