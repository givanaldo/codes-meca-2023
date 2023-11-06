#include <iostream>
using namespace std;
int main() {
    int vetor[3], temp, a, b, c;
    cin >> vetor[0] >> vetor[1] >> vetor[2];
    a = vetor[0];
    b = vetor[1];
    c = vetor[2];
    if (vetor[0] > vetor[1]) {
        temp = vetor[0];
        vetor[0] = vetor[1];
        vetor[1] = temp;
    }
    if (vetor[0] > vetor[2]) {
        temp = vetor[0];
        vetor[0] = vetor[2];
        vetor[2] = temp;
    }
    if (vetor[1] > vetor[2]) {
        temp = vetor[1];
        vetor[1] = vetor[2];
        vetor[2] = temp;
    }
    for (int i=0; i<=2; i++)
        cout << vetor[i] << endl;
    cout << endl;
    cout << a << endl << b << endl << c << endl;
    return 0;
}