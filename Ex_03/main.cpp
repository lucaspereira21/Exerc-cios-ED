#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    float horasTrabalhadas;
    float salarioMinimo = 1100;
    float salarioAReceber;
    float salarioBruto;
    float valorHora;
    int imposto;

    setlocale(LC_ALL, "portuguese");

    cout << "Digite as horas trabalhadas: ";
    cin >> horasTrabalhadas;

    valorHora = (salarioMinimo / 2);
    salarioBruto = (horasTrabalhadas * valorHora);
    imposto = (0.03*salarioBruto);
    salarioAReceber = (salarioBruto - imposto);

    cout << "Salário a Receber é: " << salarioAReceber;






}
