#include <iostream>
using namespace std;

/*
Escreva uma função int maior(int a, int b) que retorna o maior dos dois valores recebidos. No main, leia dois inteiros e mostre o resultado.
*/

int maior(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int a, b;

    cin >> a;
    cin >> b;

    cout << "Maior: " << maior(a, b);

    return 0;
}