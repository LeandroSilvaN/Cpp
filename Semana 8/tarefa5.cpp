#include <iostream>
using namespace std;


int totalProcessado = 0;

void processarValor(int valor) {
    totalProcessado += valor;
}

int main() {
    int a, b, c;
    cin >> a;
    processarValor(a);
    cin >> b;
    processarValor(b);
    cin >> c;
    processarValor(c);

    cout << totalProcessado;

    return 0;
}