#include <iostream>
using namespace std;

/*
O programa abaixo deveria ler 5 números inteiros, guardá-los num array, e mostrar a soma deles, mas tem 3 erros e não compila. Corrija todos e entregue a versão funcionando.
- faltando ;
- <= em vez de <
- saida contem Soma em vez de soma
*/

int main() {
    int valores[5];
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        cin >> valores[i];
        soma = soma + valores[i];
    }

    cout << soma << endl;
    return 0;
}