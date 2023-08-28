// Celsius para Fahrenheit (F = 9*C/5 + 32)
#include <iostream>
using namespace std;

int main() {
    float celsius;
    cout << "Temperatura em Celsius: ";
    cin >> celsius;
    float fahr = 9*celsius/5 + 32;
    cout << "Fahrenheit: " << fahr;
    return 0;
}

