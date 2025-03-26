#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float largura;
    float altura;

    cout << "Programa de Calculo de consumo de latas de Tintas SenaiVil" << endl;

    cout << "Informe a altura: ";
    cin >> altura;

    cout << "Informe a largura: ";
    cin >> largura;

    float superficie = altura * largura;

    cout << "Superficie: " << superficie << endl;

    float rendimento = 3.6;

    int quantidade_lata = ceil(superficie / rendimento);

    cout << "Quantidade de latas: " << quantidade_lata << endl;

    system("pause");

}
