#include <iostream>
//#include <windows.h>
//#include <locale>

using namespace std;

int main() {
    int idade;
    string nome;
    cout << "Nome: ";
    // cin >> nome;
    getline(cin, nome);
    cout << "Idade: ";
    cin >> idade;
    cout << "Seu nome: " << nome << endl;
    cout << "Sua idade: " << idade;
    return 0;
}

