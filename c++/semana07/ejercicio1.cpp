#include <iostream>
using namespace std;

int llenar() {
    int r;
    cout << "Ingrese un numero: ";
    cin >> r;
    return r;
}

int suma(int a, int b, int c, int d, int e) {
    return a + b + c + d + e;
}

int main() {
    int a, b, c, d, e;
    int x;

    a = llenar();
    b = llenar();
    c = llenar();
    d = llenar();
    e = llenar();

    x = suma(a, b, c, d, e);
    

    cout << "La suma es: " << x << endl;

    return 0;
}

