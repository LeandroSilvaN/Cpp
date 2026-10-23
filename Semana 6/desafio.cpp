#include <iostream>
using namespace std;

int main() {
    const int t = 5;
    int nota[t], maior, menor = 0;
    double media, acumulo = 0;

    for (int i = 0; i < t; i++) {
        cin >> nota[i];
        acumulo += nota[i];
        maior = nota[0];
        for (int j = 0; j < t; j++) {
            if (maior < nota[j]) {
                maior = nota[j];
            }
        }
        menor 
    }

    for (int i = 0; i < t; i++) {
        if (maior < nota[i - 1]) {
            maior = nota[i - 1];
        }
    }
    cout << maior;
    

    
    return 0;
}