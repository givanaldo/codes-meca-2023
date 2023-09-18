#include <iostream>
using namespace std;
int main() {
    int n, soma = 0;
    for (int i=1; i<=5; i++) {
        cout << "Numero " << i << ": ";
        cin >> n;
        soma = soma + n;
    }
    cout << "Soma = " << soma;
    return 0;
}
