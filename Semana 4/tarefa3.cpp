#include <iostream>
using namespace std;

/*
Leia números inteiros, um de cada vez, até ler o valor 0
(o 0 não entra na soma, e a quantidade de números antes
dele varia). Ao final, mostre a soma total.
*/

int main() {
    int n = 0, soma = 0;
    do {
        cin >> n;
        soma += n;
    } while (n != 0);
    cout << soma;
    return 0;
}