#include <iostream>
using namespace std;

int main() {
    const double pi = 3.14159;
    double raio, area, perimetro;
    cin >> raio;
    area = pi * raio * raio;
    perimetro = 2 * pi * raio;

    cout << area << endl;
    cout << perimetro << endl;

    return 0;
}