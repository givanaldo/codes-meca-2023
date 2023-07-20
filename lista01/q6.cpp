#include <iostream>
using namespace std;

int main() {
    float distancia, velocidade;
    cout << "Distancia (Km): ";
    cin >> distancia;
    cout << "Velocidade media (Km/h): ";
    cin>> velocidade;
    float tempo = distancia / velocidade;
    cout << "Tempo de viagem: " << tempo << " hora(s)";
    return 0;
}
