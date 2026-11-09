#include <iostream>
using namespace std;

/*
Leia 5 números inteiros, guarde num array, e mostre a soma deles.
*/

int main() {
    int soma[4], num, total = 0;

    for (int i = 0; i < 5; i++) {
        cin >> num;
        soma[i] = num;
    }
    for (int i = 0; i < 5; i++) {
        total += soma[i];
    }
    cout << total;
    return 0;
}