#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
  float salarioNovo;
  float salarioAtual;
  float reajuste;

  setlocale(LC_ALL, "portuguese");

      cout << "\n Digite seu salário atual: ";
      cin >> salarioAtual;

      if (salarioAtual < 1000 ){
        reajuste = (salarioAtual *0.15);
        cout << "\n Seu Reajuste foi de: " << reajuste << endl;
        salarioNovo = (salarioAtual + reajuste);
        cout << "\n Seu novo salário é: " <<salarioNovo << endl;
      }
      if (salarioAtual >= 1000 && salarioAtual <=1500 ){
        reajuste = (salarioAtual *0.10);
        cout << "\n Seu Reajuste foi de: " << reajuste << endl;
        salarioNovo = (salarioAtual + reajuste);
        cout << "\n Seu novo salário é: " <<salarioNovo << endl;
      }
      if (salarioAtual > 1500 ){
        reajuste = (salarioAtual *0.05);
        cout << "\n Seu Reajuste foi de: " << reajuste << endl;
        salarioNovo = (salarioAtual + reajuste);
        cout << "\n Seu novo salário é: " <<salarioNovo << endl;
      }
}
