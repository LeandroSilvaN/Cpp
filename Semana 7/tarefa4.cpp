#include <iostream>
using namespace std;

/*
O programa abaixo deveria calcular 10 menos 3, mostrando 7, mas tem 3 erros e não compila. Corrija todos e entregue a versão funcionando.
- faltando ;
- funcao criada depois da funcao main
- funcao sem return
*/

int subtrai(int a, int b) {
    return a - b;
}
int main() {
    int resultado = subtrai(10, 3);
    cout << resultado << endl;
    return 0;
}
