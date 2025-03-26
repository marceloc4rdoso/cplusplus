#include <iostream>
#include <locale>
#include <iomanip>
#include <ctime>


using namespace std;


int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");

    time_t tempo = time(nullptr);
    cout << tempo << endl;
    
    struct tm datetime = *localtime(&tempo);
    cout << asctime(localtime(&tempo)) <<endl;
    cout << asctime(gmtime(&tempo)) <<endl;
    cout << 1900 + datetime.tm_year << endl;
    
    system("pause");
}