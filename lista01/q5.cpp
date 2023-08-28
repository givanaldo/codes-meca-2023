#include <iostream>
using namespace std;

int main() {
    float preco, valor;
    int desconto;
    cout << "Preco: ";
    cin >> preco;
    cout << "Desconto: ";
    cin>> desconto;
    valor = preco - preco*desconto/100;
    cout << "Valor: " << valor;
    return 0;
}
