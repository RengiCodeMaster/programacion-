/*Modificar una cadena por paso por referencia:
Implementa una función que modifique el contenido de una cadena mediante el paso por referencia.
En el programa principal, declara una cadena, muestra su contenido antes de la modificación,
llama a la función y muestra el contenido después de la modificación.*/
#include <iostream>
using namespace std;
void mostrar(string &x)
{
    string mundo=" todo esta bien", y;
    y = x + mundo;

    cout << "La cadena modificada es " << y << endl;
}
int main()
{
    string hola="dimesd", x;
    x = hola;
    cout << " La cadena antes de la modificacion es " << x << endl;
    mostrar(x);

    return 0;
}