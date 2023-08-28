#include <iostream>
using namespace std;
int main() {
    int idade;
    cout << "Digite a idade: ";
    cin >> idade;
    if (idade < 18) {
        cout << "Não pode entrar, vaza!!";
        cout << "Vá dormir";
    }
    else {
        cout << "Pode entrar!";
    }
    return 0;
}