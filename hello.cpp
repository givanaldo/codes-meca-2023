#include <iostream>
using namespace std;

int main() {
    int idade;
    string nome;
    cout << "Nome: ";
    // cin >> nome;
    getline(cin, nome);
    cout << "Idade: ";
    cin >> idade;
    cout << "Seu nome é " << nome 
        << " e sua idade é " << idade;
    return 0;
}

