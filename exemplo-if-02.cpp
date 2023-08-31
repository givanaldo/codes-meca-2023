#include <iostream>
using namespace std;
int main() {
    int n1, n2, n3, n4;
    float media;
    int p1=2, p2=2, p3=3, p4=3;
    cout << "Digite as quatro notas: ";
    cin >> n1 >> n2 >> n3 >> n4;
    media = (n1*p1+n2*p2+n3*p3+n4*p4)/(p1+p2+p3+p4);
    cout << "Media = " << media << endl;
    if (media >= 60)
        cout << "Situacao: APROVADO";
    if (media >= 30 && media < 60)
        cout << "Situacao: RECUPERACAO";
    if (media < 30)
        cout << "Situacao: REPROVADO";
    return 0;
}