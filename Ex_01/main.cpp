#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    int peso;
    float altura;
    float imc;

    setlocale(LC_ALL, "portuguese");


    cout << "\n Digite seu peso: ";
    cin >> peso;
    cout << "\n Digite sua altura: ";
    cin >> altura;


    imc = peso / (altura*altura);
    cout << " \n Índice de Massa Corporal: " <<imc<<endl;



    if (imc < 20) {
        cout << "\n Abaixo do peso" <<endl;
    }
    if (imc > 20 && imc < 25) {
        cout << "\n Peso ideal" << endl;
    }
    if (imc >= 25) {
        cout << "\n Acima do peso" << endl;
    }


}
