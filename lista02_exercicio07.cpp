#include <iostream>
#include <string>

using namespace std;
/*
7) Faça um programa que pergunte uma data ao usuário (dia, mês e ano separadamente) e
valide se aquela data é real ou não, fazendo as seguintes validações:
• Verificar se o dia informado existe dentro daquele mês
o Tem 31 dias se o mês for 1, 3, 5, 7, 8, 10 ou 12;
o Tem 30 dias se o mês for 4, 6, 9 ou 11;
o Tem 28 dias se o mês for 2 e o ano não for bissexto;
o Tem 29 dias se o mês for 2 e o ano for bissexto.
• Verificar se o mês informado existe (ano vai até 12 meses);
• Verificar se o dia, mês e ano são valores positivos.
Informar ao usuário se a data for válida ou não.
*/
int main(){ 
    
    cout << "---------------------------------" <<endl;
    cout << "|      Validação de data        |" <<endl;
    cout << "|     Muito bom Gafanhoto...    |" <<endl;
    cout << "---------------------------------" <<endl;
    
    int dia, mes, ano;
    cout << "Digite dia ";
    cin >> dia;
    cout << "Digite mês ";
    cin >> mes;
    cout << "Digite ano ";
    cin >> ano;
    
    cout << dia <<"/"<< validaMes mes (>= 1 && mes <= 12) ? << mes << : <<"/"<< ano << end;
    
    
    system("pause");
}
