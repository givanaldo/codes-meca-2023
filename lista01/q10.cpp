#include <iostream>
using namespace std;

int main() {
    int cigarros, anos;
    cout << "Cigarros fumados por dia: ";
    cin >> cigarros;
    cout << "Anos de fumante: ";
    cin >> anos;
    // por 10 min por cigarro => 144 cigarros: perde 1 dia
    int total = cigarros * (anos * 365);
    int perda = total / 144;
    cout << "Voce perdeu " << perda << " dias de vida.";
    return 0;
}
