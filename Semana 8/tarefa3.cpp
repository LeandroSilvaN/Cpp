#include <iostream>
using namespace std;

void aplicarDesconto(double &preco, double percentual) {
    percentual = (preco * percentual) / 100;
    preco = preco - percentual;
    return;
}

int main() {
    double preco, percentual;
    cin >> preco;
    cin >> percentual;

    aplicarDesconto(preco, percentual);

    cout << preco;

    return 0;
}