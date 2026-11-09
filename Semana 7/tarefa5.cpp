#include <iostream>
using namespace std;

/*
Escreva uma função void mostrarSituacao(double nota) que mostra Nota invalida se a nota for menor que 0 ou maior que 10, usando um return sozinho para encerrar a função logo em seguida. Caso a nota seja válida, a função mostra Aprovado se a nota for maior ou igual a 6, ou Reprovado caso contrário. No main, leia uma nota e chame a função.
*/

void mostrarSituacao(double nota) {
    if (nota < 0 || nota > 10) {
        cout << "Nota invalida";
        return;
    } else if (nota >= 6) {
        cout << "Aprovado";
        return;
    } else {
        cout << "Reprovado";
    }
}

int main() {
    mostrarSituacao(7);
    return 0;
}