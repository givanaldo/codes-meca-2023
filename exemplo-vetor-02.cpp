#include <iostream>
using namespace std;
int main() {
    int num[] = {12, 23, 45, 29, 56, 90};
    // tamanho de um vetor: sizeof()
    int tam = sizeof(num)/sizeof(int);
    cout << "Vetor: " << tam << endl;
    for (int i=0; i<tam; i++)
        cout << num[i] << endl;
    return 0;
}