#include <iostream>
using namespace std;

void dobrar(int &numero) {
    numero *= 2;
    return;
}

int main() {
    int num;
    cin >> num;

    dobrar(num);

    cout << num;

    return 0;
}