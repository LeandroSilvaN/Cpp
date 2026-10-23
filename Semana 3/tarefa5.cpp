#include <iostream>
using namespace std;

// Leia três números inteiros e mostre o maior deles.

int main()
{
    int n1, n2, n3;
    cout << "N1: ";
    cin >> n1;
    cout << "N2: ";
    cin >> n2;
    cout << "N3: ";
    cin >> n3;

    if (n1 > n2 && n1 > n3) {
        cout << n1;
    } else if (n2 > n1 && n2 > n3) {
        cout << n2;
    } else {
        cout << n3;
    }
    return 0;
}