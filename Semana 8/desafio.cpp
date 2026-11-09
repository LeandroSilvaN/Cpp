#include <iostream>
using namespace std;

/*
Declare uma variável global int totalProcessado, inicializada com 0, fora de qualquer função. Escreva uma função void processarValor(int valor) que soma valor em totalProcessado. No main, leia três inteiros e chame processarValor uma vez para cada um. Ao final, mostre o valor de totalProcessado.
*/

void ordenarTres(double &a, double &b, double &c) {

    double aux;

    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }

    if (a > c) {
        aux = a;
        a = c;
        c = aux;
    }

    if (b > c) {
        aux = b;
        b = c;
        c = aux;
    }
}

int main() {
    double a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    ordenarTres(a, b, c);

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}