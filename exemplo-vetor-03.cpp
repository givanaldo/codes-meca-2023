#include <iostream>
using namespace std;
int main() {
    int tam = 5;
    int n[tam];
    for (int i=0; i<tam; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> n[i];
    }
    for (int i=0; i<tam; i++) {    
        if (n[i] % 3 == 0)    
            cout << n[i] << " ";
    }
    
    return 0;
}