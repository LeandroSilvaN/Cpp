#include <iostream>
using namespace std;

int main() {
    int nota, aluno;
    double media, acumulo = 0;
    cout << "Quantidades de alunos: ";
    cin >> aluno;

    for (int i = 1; i <= aluno; i++) {
        cout << "Nota do aluno " << i << ": ";
        cin >> nota;
        for (int j = 1; j <= nota; j++) {
            cout << "*";
        }
        cout << endl;
        acumulo += nota;
    }
    media = acumulo / aluno;
    cout << "Media de notas dos alunos: " << media;
    return 0;
}