#include <iostream>
using namespace std;
int main() {
    int n;
    bool primo = true;
    cout << "Digite um numero: ";
    cin >> n;
    for (int i=2; i<n; i++) {
        if (n % i == 0) {
            primo = false;
            break;
        }
    }
    if (primo == true)
        cout << "Numero " << n << " primo";
    else
        cout << "Numero " << n << " nao primo";
    return 0;
}