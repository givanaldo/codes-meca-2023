#include <iostream>
using namespace std;
int main() {
    float peso, multa, excesso;
    cout << "Peso (Kg): ";
    cin >> peso;
    if (peso > 50) {
        excesso = peso - 50;
        multa = 4.00 * excesso;
    }
    else {
        excesso = 0;
        multa = 0;
    }
    cout << "Excesso de peso: " << excesso << "\n";
    cout << "Multa a pagar: R$ " << multa;
    return 0;
}