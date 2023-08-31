#include <iostream>
using namespace std;
int main() {
    int n1, n2, n3, n4;
    float media;
    int p1=2, p2=2, p3=3, p4=3;
    cout << "1o bimestre: ";
    cin >> n1;
    cout << "2o bimestre: ";
    cin >> n2;
    cout << "3o bimestre: ";
    cin >> n3;
    cout << "4o bimestre: ";
    cin >> n4;
    media = (n1*p1+n2*p2+n3*p3+n4*p4)/(p1+p2+p3+p4);
    cout << "Media = " << media << endl;
    if (media >= 60)
        cout << "Situação: APROVADO";
    else if (media >= 30)
        cout << "Situação: RECUPERACAO";
    else 
        cout << "Situação: REPROVADO";
    return 0;
}