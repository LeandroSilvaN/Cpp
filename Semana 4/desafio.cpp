#include <iostream>
using namespace std;

/*
Leia um número inteiro N e mostre a tabuada dele, do 1 ao 10,
no formato N x i = resultado, uma linha por multiplicador.
*/

int main() {
    int n, i = 1;

    cin >> n;
    while (i <= 10) {
        cout << n << " x " << i << " = " << n * i << endl;
        i++;
    }
    return 0;
}