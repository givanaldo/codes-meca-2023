#include <iostream>
using namespace std;

int main() {
    float salario;
    int porcentagem;
    cout << "Salario atual: ";
    cin >> salario;
    cout << "Porcentagem do aumento: ";
    cin >> porcentagem;
    float salario_novo = salario + salario*porcentagem/100;
    cout << "Novo salario: " << salario_novo;
    return 0;
}
