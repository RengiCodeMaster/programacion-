/*Duplicar un número por valor:

Crea una función que tome un número como parámetro y devuelva el doble de ese número.
Llama a la función desde el programa principal e imprime el resultado.*/
#include <iostream>
using namespace std;
int duplicado(int a = 0)
{
    return 2 * a;
}
int dato()
{
    int r;
    cout << "\nIngrese el numero: ";
    cin >> r;
    return r;
}
void mostrar(int respuesta)
{
    cout << "\nEl doble de dicho numero es: " << respuesta << endl;
}
int main()
{
    int d;
    d = dato();
    int respuesta;
    respuesta = duplicado(d);
    mostrar(respuesta);


    return 0;
}