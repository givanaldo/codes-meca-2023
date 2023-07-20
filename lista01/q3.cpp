#include <iostream>
using namespace std;

int main() {
    int d, h, m, s, total_s;
    cout << "Dias: ";
    cin >> d;
    cout << "Horas: ";
    cin >> h;
    cout << "Minutos: ";
    cin >> m;
    cout << "Segundos: ";
    cin >> s;
    total_s = d * 86400 + h * 3600 + m * 60 + s;
    cout << "Total = " << total_s;
    return 0;
}
