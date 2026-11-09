#include <iostream>
using namespace std;

/*
Escreva uma função void contarAte(int limite) que usa uma variável local para contar de 1 até limite, mostrando cada número numa linha. No main, leia dois inteiros e chame a função uma vez para cada um, mostrando que a contagem recomeça do 1 em cada chamada.
*/

void contarAte(int limite) {
    int inicio = 1;
    for (int i = inicio; i <= limite; i++) {
        cout << i << endl;
    }
    return;
}

int main() {
    int limite1, limite2;
    cin >> limite1;
    cin >> limite2;
    cout << endl;
    contarAte(limite1);

    contarAte(limite2);

    return 0;
}