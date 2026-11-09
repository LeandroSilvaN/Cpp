#include <iostream>
using namespace std;

/*
Escreva uma função double dobro(double numero) que retorna o dobro do valor recebido. No main, leia um número e mostre o resultado da chamada.
*/

double dobro(double numero) {
    return numero * 2;
}

int main() {
    cout << dobro(2);
    return 0;
}