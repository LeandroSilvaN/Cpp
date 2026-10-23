#include <iostream>
using namespace std;

/*
Leia primeiro a quantidade de números, N, e depois leia os N números, um de cada vez. Mostre o maior valor lido, seguido do menor, sem guardar os números em nenhum lugar além das variáveis que controlam o maior e o menor.
*/

int main() {
    int n, n2, maior = -1000, menor = 1000;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> n2;
        if (n2 > maior) {
            maior = n2;
        }
        if (n2 < menor) {
            menor = n2;
        }
    }
    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor;
    return 0;
}