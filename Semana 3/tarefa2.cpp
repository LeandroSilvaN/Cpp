#include <iostream>
using namespace std;

/* 
Leia um número inteiro e mostre PAR se ele 
for par, ou IMPAR se for ímpar (sem acento).
*/
int main() {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << "Par";
    } else {
        cout << "Impar";
    }
    return 0;
}