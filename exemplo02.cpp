#include <iostream>
using namespace std;

int main() {
    int idade;
    string nome, sobrenome;
    cout << "Digite o nome e a idade: ";
    // ler 3 variáveis em uma linha
    cin >> nome >> sobrenome >> idade;
    cout << "Seu nome: " << nome 
         << " " << sobrenome << endl;
    cout << "Sua idade: " << idade;
    return 0;
}

