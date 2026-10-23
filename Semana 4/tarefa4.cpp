#include <iostream>
using namespace std;

/*
O programa abaixo deveria mostrar os números de 1 a 5, um por linha,
mas tem 3 erros e não compila. Corrija todos e entregue a 
versão funcionando.
*/

int main() {
    int x = 1; // sem ;
    while (x <= 5) {  // while com W maiusculo
        cout << x << endl;
        x++; // sem ;
    }
    return 0;
}