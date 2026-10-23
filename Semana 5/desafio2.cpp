#include <iostream>
using namespace std;

/*
Leia um número inteiro N e mostre um triângulo onde
a linha i (de 1 a N) contém os números de 1 até i,
separados por espaço, usando laços aninhados.
*/

int main() {
    int n; 

    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}