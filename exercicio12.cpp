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

    float quantidade_lata = std:: ceil(superficie / 3.6);

    cout << "Quantidade de latas: " << quantidade_lata << endl;

    system("pause");

}
