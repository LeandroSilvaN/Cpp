#include <iostream>
using namespace std;

// Leia dois números inteiros e mostre o maior deles.

int main() {
    int n1, n2;
    cin >> n1;
    cin >> n2;

    if (n1 > n2) {
        cout << n1;
    } else {
        cout << n2;
    }
    return 0;
}