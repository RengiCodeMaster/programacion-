/*Intercambiar dos números por paso por referencia:
Define una función que intercambie los valores de dos variables enteras mediante el paso por referencia.
En el programa principal, declara dos variables, muestra sus valores antes del intercambio,
llama a la función y muestra los valores después del intercambio.*/
#include <iostream>
using namespace std;
void interCambiar(int &a, int &b)
{
    cout << "despues del intercambio a es " << a << " y b es " << b << endl;
}
int main()
{
    int a = 2, b = 3, c;
    cout << "Antes del intercambio a es " << a << " y b es " << b << endl;
    c = a;
    a = b;
    b = c;
    interCambiar(a, b);
    return 0;
}