#include <iostream>
using namespace std;
int main() {
    int n1, n2, n3, maior, menor;
    cout << "Numero 1: ";
    cin >> n1;
    cout << "Numero 2: ";
    cin >> n2;
    cout << "Numero 3: ";
    cin >> n3;
    if (n1 > n2 && n1 > n3)
        maior = n1;
    else if (n2 > n1 && n2 > n3)
        maior = n2;
    else 
        maior = n3;

    if (n1 < n2 && n1 < n3)
        menor = n1;
    else if (n2 < n1 && n2 < n3)
        menor = n2;
    else 
        menor = n3;
    
    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor;
    return 0;
}
