#include <iostream>
using namespace std;

int main() {
    // Leia o preço de um produto e a quantidade comprada, e mostre o valor total a pagar.
    double preco;
    int quantidade, resultado;

    cin >> preco;
    cin >> quantidade;

    resultado = preco * quantidade;
    cout << resultado;

    return 0;
}