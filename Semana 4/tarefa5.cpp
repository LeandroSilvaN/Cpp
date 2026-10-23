#include <iostream>
using namespace std;

/*
Leia primeiro a quantidade de notas, N, e depois leia
as N notas, uma de cada vez. Mostre a média delas.
*/

int main() {
    int quantidade = 0, contador = 0;
    double nota, acumulador, media;

    cin >> quantidade;

    do {
        cin >> nota;
        acumulador += nota;
        contador++;
    } while (quantidade > contador);

    media = acumulador / contador;
    cout << media;

    return 0;
}