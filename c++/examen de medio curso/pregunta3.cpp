#include <iostream>
using namespace std;
int suma(int a, int b, int c, int d)
{
    return a + b + c + d;
}
int main()
{
    int a = 2, b = 8, c = 2, d = 7;
    int resultado;
    resultado = suma(a, b, c, d);
    cout << "La suma es: " << resultado << endl;
    return 0;
}
