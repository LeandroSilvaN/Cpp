#include <iostream>
using namespace std;

/*
Leia uma nota, de 0 a 10, e mostre o conceito correspondente: 
A para nota maior ou igual a 9, B para maior ou igual a 7, C 
para maior ou igual a 5, e D para o restante.
*/

int main()
{
    double nota;
    cin >> nota;
    if (nota >= 9) {
        cout << "A";
    } else if (nota >= 7) {
        cout << "B";
    } else if (nota >= 5) {
        cout << "C";
    } else {
        cout << "D";
    }
    return 0;
}