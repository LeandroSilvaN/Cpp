#include <iostream>
using namespace std;

/*
Leia a média de um aluno e mostre APROVADO se ela
for maior ou igual a 7, ou REPROVADO caso contrário.
*/

int main() {
    double media;
    cin >> media;
    if (media >= 7) {
        cout << "APROVADO";
    } else {
        cout << "REPROVADO";
    }
    return 0;
}