/*Incrementar un número por paso por referencia:
Crea una función que incremente el valor de una variable entera mediante el paso por referencia.
En el programa principal, declara una variable,
muestra su valor antes del incremento, llama a la función y muestra el valor después del incremento.*/
#include <iostream>
using namespace std;
void incrementar(int &x)
{
    int z;
    z = x + 20;
    cout << "el valor de x modificado es " << z << endl;
}
int main()
{
    int x = 5, y;
    y = x;
    cout << "el valor de x antes del incremento es:" << x << endl;
    incrementar(x);

    return 0;   
}