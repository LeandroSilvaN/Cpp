#include <iostream>
using namespace std;

/*
Leia um número inteiro N e mostre um triângulo
de asteriscos com N linhas, usando laços aninhados:
a linha i deve ter i asteriscos.
*/

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}