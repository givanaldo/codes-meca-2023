#include <iostream>
//#include <windows.h>
//#include <locale>

using namespace std;

int main() {
    //setlocale(LC_ALL, "pt-BR.UTF8");
    //SetConsoleCP(CP_UTF8);
    //SetConsoleOutputCP(CP_UTF8);
    string turma = "Mecatrônica";
    cout << "Olá turma de " << turma;
    cout << "\nDigite algo: ";
    string algo;
    cin >> algo;
    cout << "Digitado: " << algo;
    return 0;
}

