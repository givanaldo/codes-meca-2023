#include <iostream>
using namespace std;
int main() {
    int ano;
    cout << "Ano: ";
    cin >> ano;
    if ((ano%4==0 && ano%100!=0) || ano%400==0)
        cout << "O ano eh bissexto";
    else
        cout << "O ano nao eh bissexto";
    return 0;
}
