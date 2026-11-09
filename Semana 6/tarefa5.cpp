#include <iostream>
using namespace std;

/*
Leia números inteiros, um de cada vez, até ler o valor -1 (não conte o -1). Guarde os números lidos num array com tamanho máximo 20, controlando quantas posições estão realmente em uso. Ao final, mostre a média dos números lidos.
*/

int main() {
    int n = 20, numero;
    double media, un = 0, a = 0;
    int num[n];

    for (int i = 0; i < n; i++) {
        cin >> numero;
        if (numero != -1) {
            num[i] = numero;
            a += num[i];
            un++;
        } else {
            break;
        }
    }
    media = a / un;
    cout << "Media array: " << media << endl;
    return 0;
}