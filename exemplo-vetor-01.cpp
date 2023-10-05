#include <iostream>
using namespace std;
int main() {
    int n_num = 10;
    int n[n_num];
    float media = 0;
    for (int i=0; i<n_num; i++) {
        cout << "Nota " << i+1 << ": ";
        cin >> n[i];
        media = media + n[i];
    }
    media = media / n_num;
    cout << "Media = " << media;
    return 0;
}