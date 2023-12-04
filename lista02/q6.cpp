#include <iostream>
using namespace std;
int main() {
    float ganhoh, horastrab, liquido;
    float ir, inss, sindicato, bruto;
    cout << "Ganhor por hora: ";
    cin >> ganhoh;
    cout << "Horas trabalhadas no mês: ";
    cin >> horastrab;
    bruto = ganhoh * horastrab;
    ir = bruto * 0.11;
    inss = bruto * 0.08;
    sindicato = bruto * 0.05;
    liquido = bruto - ir - inss - sindicato;
    cout << "+ Salario bruto: R$ " << bruto << "\n";
    cout << "- IR (11%): R$ " << ir << "\n";
    cout << "- INSS (8%): R$ " << inss << "\n";
    cout << "- Sindicato (5%): R$ " << sindicato << "\n";
    cout << "= Salário líquido: R$ " << liquido;
    return 0;
}