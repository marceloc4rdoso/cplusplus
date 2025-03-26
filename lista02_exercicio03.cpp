#include <iostream>

using namespace std;
/*
3) Faça um programa que pede duas notas de um aluno. Em seguida ele deve calcular a
média do aluno e dar o seguinte resultado:
• Aprovado → Acima de 7
• Reprovado → Abaixo de 5
• Recuperação → Entre 5 e 7
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
