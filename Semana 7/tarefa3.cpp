#include <iostream>
using namespace std;

/*
Escreva uma função double areaRetangulo(double base, double altura) que retorna a área do retângulo. No main, leia a base e a altura e mostre a área.
*/

double areaRetangulo(double base, double altura) {
    double area = base * altura;
    return area;
}

int main() {
    int b, a;

    cout << "Base: ";
    cin >> b;
    cout << "Altura: ";
    cin >> a;

    cout << "Area: " << areaRetangulo(b, a);

    return 0;
}