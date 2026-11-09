#include <iostream>
using namespace std;

/*
Escreva uma função void ordenar(int &a, int &b), por referência, que troca os valores de a e b se a for maior que b, deixando sempre o menor valor em a. No main, leia dois inteiros e mostre os dois, já ordenados, em ordem crescente.
*/

void ordenar(int &a, int &b) {
    int a2 = a;
    if (a > b) {
        a = b;
        b = a2;
    }
    return;
}

int main() {
    int a, b;
    cin >> a;
    cin >> b;

    ordenar(a, b);
    cout << a << endl << b;
    return 0;
}