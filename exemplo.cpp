#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
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

