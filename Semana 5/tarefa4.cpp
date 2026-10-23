#include <iostream>
using namespace std;

/*
O programa abaixo deveria mostrar os números de 1 a 5,
um por linha, mas tem 3 erros e não compila. Corrija
todos e entregue a versão funcionando
- endl faltando ;
- for com ; em vez de {}
*/

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << i << endl;
    }
    return 0;
}