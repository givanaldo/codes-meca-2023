#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int km, dias;
    float valor;
    cout << "Km percorridos: ";
    cin >> km;
    cout << "Diarias: ";
    cin >> dias;
    valor = km * 0.15 + dias * 60;
    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << valor;
    return 0;
}
