#include <iostream>
using namespace std;

/*
Leia um número inteiro N (maior ou igual a 1) e mostre a
contagem regressiva de N até 1, um número por linha, usando um laço.
*/

int main() {
    int n;
    cin >> n;

    while (n >= 1) {
        cout << n << endl;
        n--;
    }

    return 0;
}