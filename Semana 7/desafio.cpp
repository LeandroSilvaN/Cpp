#include <iostream>
using namespace std;

/*
Escreva as funções double celsiusParaFahrenheit(double celsius) e double fahrenheitParaCelsius(double fahrenheit). No main, leia um valor em Celsius, mostre a conversão para Fahrenheit, e depois converta esse resultado de volta para Celsius com a segunda função, mostrando o valor final.
*/

double celsiusParaFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

double fahrenheitParaCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}


int main() {
    double c;
    cout << "Digite o valor em C: ";
    cin >> c;
    c = celsiusParaFahrenheit(c);
    cout << c << " F" << endl;
    cout << fahrenheitParaCelsius(c) << " C";
    return 0;
}