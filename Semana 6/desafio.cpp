#include <iostream>
using namespace std;

/*
Leia a quantidade de números, N (no máximo 20), depois leia
os N números guardando-os num array. Mostre o maior valor,
seguido da posição (índice, começando em 0) onde ele aparece
pela primeira vez.
*/

int main() {
    int n, maior = -100, busca = -1;
    cout << "Quantidade de numeros: ";
    cin >> n;
    int num[n];

    for (int i = 0; i < n; i++) {
        cin >> num[i];
        if (maior < num[i]) {
            maior = num[i];
        }
    }
    for (int i = 0; i < n; i++) {
          if (num[i] == maior) {
            busca += i + 1;
            break;
          }
    }
    
    cout << "Maior: " << maior << endl;
    cout << "Posicao: " << busca << endl;

    return 0;
}