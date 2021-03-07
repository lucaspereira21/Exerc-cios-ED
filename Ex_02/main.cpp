#include <iostream>

using namespace std;

int main()
{
    int idade;

    cout << "\n Digite sua idade: ";
    cin >> idade;

    if(idade >=5 && idade <=7){
        cout << "Infantil A" <<endl;
    }
    if(idade >=8 && idade <=10){
        cout << "Infantil B" <<endl;
    }
    if(idade >=11 && idade <=13){
        cout << "Juvenil A" <<endl;
    }
    if(idade >=14 && idade <=17){
        cout << "Juvenil B" <<endl;
    }
    if(idade >17){
        cout << "Senior" <<endl;
    }
}
