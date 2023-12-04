#include <iostream>
using namespace std;
int main() {
    int area, latas;
    cout << "Area a ser pintada: ";
    cin >> area;
    latas = area / 54;
    if (area % 54 != 0)
        latas = latas + 1;
    cout << "Precisa de " << latas << " latas.\n";
    cout << "Total = R$ " << latas*80;
    return 0;
}