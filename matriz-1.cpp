#include <iostream>
using namespace std;
int main() {
    int lin = 2, col = 3;
    int matriz[lin][col];
    for (int i=0; i<lin; i++) {
        for (int j=0; j<col; j++) {
            cout << "M[" << i << ", " << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    for (int i=0; i<lin; i++) {
        for (int j=0; j<col; j++) {
            cout << matriz[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}
