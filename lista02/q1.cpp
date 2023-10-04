// a < b + c # b < a + c # c < a + b
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Lados do triangulo: ";
    cin >> a >> b >> c;
    if (a < b+c && b < a+c && c < a+b) {
        if (a == b && b == c)
            cout << "Triangulo Equilatero";
        else if (a == b || a == c || b == c)
            cout << "Triangulo Isoceles";
        else
            cout << "Triangulo Escaleno";
    }
    else
        cout << "Os lados nao formam triangulo.";
    return 0;
}
