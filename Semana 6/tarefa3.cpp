#include <iostream>
using namespace std;

/*
Leia a quantidade de números, N (no máximo 20), depois leia 
os N números guardando-os num array, e por fim leia um valor 
a ser procurado. Mostre a posição (índice, começando em 0) onde
esse valor aparece pela primeira vez, ou -1 se ele não estiver no array.
*/

int main() {
    int n, a, busca = -1;
    cout << "Quantidade de numeros: ";
    cin >> n;
    int num[n];

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    cout << "Numero que deseja procurar: ";
    cin >> a;
    for (int i = 0; i < n; i++) {
          if (num[i] == a) {
            busca += i + 1;
            break;
          }
    }
    cout << "Posicao: " << busca << endl;

    return 0;
}