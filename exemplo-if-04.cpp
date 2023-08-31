#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a, b, c;
    float x1, x2;
    cout << "Coeficientes a, b e c: ";
    cin >> a >> b >> c;
    int delta = b*b - 4*a*c;
    if (delta < 0) {
        cout << "Nao existem raizes reais";
    }
    else {
        x1 = (-b + sqrt(delta)) / 2*a;
        x2 = (-b - sqrt(delta)) / 2*a;
    }
    return 0;
}