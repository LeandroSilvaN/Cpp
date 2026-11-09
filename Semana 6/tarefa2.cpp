#include <iostream>
using namespace std;

/*
Leia primeiro a quantidade de números, N (no máximo 20),
e depois leia os N números, guardando-os num array.
Mostre o maior valor lido, seguido do menor.
*/

int main() {
    int n, maior = -100, menor = 100;
    cout << "Quantidade de numeros: ";
    cin >> n;
    int num[n];

    for (int i = 0; i < n; i++) {
        cin >> num[i];
        if (maior < num[i]) {
            maior = num[i];
        }
        if (menor > num[i]) {
            menor = num[i];
        } 
    }
    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;

    return 0;
}