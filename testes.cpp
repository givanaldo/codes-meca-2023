#include <iostream>
using namespace std;
int main() {
    int valor;
    int cedulas[] = {100, 50, 20, 10, 5, 2, 1};
    cin >> valor;
    cout << valor << endl;
    int n;
    for (int i=0; i<7; i++) {
        n = valor / cedulas[i];
        valor = valor % cedulas[i];
        cout << n << " nota(s) de R$ " << cedulas[i] << ",00" << endl;
    }
    return 0;
}
