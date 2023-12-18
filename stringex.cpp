#include <iostream>
using namespace std; 

int main() {
    string palavra;
    cout << "Palavra: ";
    cin >> palavra;
    system("cls");
    char letras[palavra.length()];
    for (int i=0; i<palavra.length(); i++) {
        cout << "_ ";
        letras[i] = '_';
    }
    while (true) {
        
    }
    
    return 0;
}