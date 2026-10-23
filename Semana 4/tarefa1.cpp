#include <iostream>
using namespace std;

/*
Leia um número de 1 a 7 e mostre o nome do dia da semana correspondente,
usando switch (1 = Domingo, 2 = Segunda, 3 = Terca, 4 = Quarta, 5 = Quinta,
6 = Sexta, 7 = Sabado). Se o número não estiver entre 1 e 7, mostre Invalido.
*/

int main()
{
    int dia;
    cin >> dia;

    switch (dia)
    {
    case 1:
        cout << "Domingo";
        break;
    case 2:
        cout << "Segunda";
        break;
    case 3:
        cout << "Terca";
        break;
    case 4:
        cout << "Quarta";
        break;
    case 5:
        cout << "Quinta";
        break;
    case 6:
        cout << "Sexta";
        break;
    case 7:
        cout << "Sabado";
        break;
    default:
        cout << "Invalido";
    }

    return 0;
}