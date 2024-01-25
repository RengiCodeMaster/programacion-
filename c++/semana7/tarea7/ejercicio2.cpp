/*Calcular el área de un círculo por valor:
Diseña una función que calcule el área de un círculo dado su radio (pasado por valor).
Imprime el área resultante en el programa principal.*/
#include <iostream>
#include <cmath>
using namespace std;
double area(double r)
{
    double x;
    x = pow(r, 2) * M_PI;
    return x;
}
double datos()
{
    double r;
    cout << "\nIngrese le radio: ";
    cin >> r;
    return r;
}
void mostrar(double respuesta)
{
    cout<<"El area del circulo es: "<<respuesta<<endl;
}

int main()
{
    int radio;
    radio = datos();
    double respuesta;
    respuesta = area(radio);
    mostrar(respuesta);

    return 0;
}