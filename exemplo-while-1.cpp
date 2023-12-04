#include <iostream>
using namespace std;
int main() {
    int n, numero = 23;
    while (n != numero) {
        cout << "Digite um numero: ";
        cin >> n;
        if (n == numero)
            cout << "Acerto mizerave\n";
        else
            cout << "Erro mizeria\n";
    }
    cout << "Fim de jogo!";
    return 0;
}
