#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

const short COBERTURA_LATA = 3;

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");

    float altura;
    cout << "Digite a altura da parede: ";
    cin >> altura;

    float largura;
    cout << "Digite a largura da parede: ";
    cin >> largura;

    float area = altura * largura;

    short latasInteiro = area / COBERTURA_LATA;

    float latasResto = area - COBERTURA_LATA * latasInteiro;

    bool temResto = latasResto > 0;

    short latasTotal = latasInteiro + temResto;

    // cout << latasInteiro << endl;
    // cout << latasResto << endl;
    // cout << temResto << endl;
    // cout << latasTotal << endl;

    cout << "Você precisará comprar " << latasTotal << " latas de tinta" << endl;

    system("pause");
}