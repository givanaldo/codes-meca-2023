#include <iostream>
#include <ctime>
using namespace std;

int main() {
  int num;
  srand(time(nullptr)); // criar a fonte aleatória
  for (int i=0; i<10; i++) { // sortear 10 vezes
    num = rand() % 2;        // gera o número aleatório
    cout << "Numero: " << num << endl;
  }
  return 0;
}