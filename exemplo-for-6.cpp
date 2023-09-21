#include <iostream>
using namespace std;
int main() {
    int n, fatorial=1;
    cout << "Numero: ";
    cin >> n;
    for (int i=1; i<=n; i++)
        fatorial = fatorial * i;
    cout << "F(" << n << ") = " << fatorial;
    return 0;
}
