#include <iostream>
using namespace std;

/*
Leia um número inteiro N e mostre a tabuada dele, do
1 ao 10, no formato N x i = resultado, uma linha por
multiplicador, usando um laço for.
*/

int main() {
    int num;
    cin >> num;
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    return 0;
}