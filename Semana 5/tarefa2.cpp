#include <iostream>
using namespace std;

/*
Leia um número inteiro N e mostre a soma de todos
os números pares de 1 até N, usando um laço for.
*/

int main() {
    int n, a = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            a += i;
        }
    }
    cout << a;

    return 0;
}