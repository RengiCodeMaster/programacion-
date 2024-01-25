/*Sumar los elementos de un arreglo por valor:
implementa una función que tome un arreglo como parámetro y devuelva la suma de sus elementos.
Luego, desde el programa principal, crea un arreglo, llama a la función y muestra la suma.*/
#include <iostream>
#include <vector>
using namespace std;
int cantidad_a_llenar()
{
    int n;
    cout << "\nIngrese la cantidad de numeros: ";
    cin >> n;
    return n;
}
void llenar(vector<int> &vector, int n)
{

    for (int i = 0; i < n; i++)
    {
        int r;
        cout << "\nIngrese los valores "<<i+1<<": ";
        cin >> r;
        vector.push_back(r);
    }
}
int sumarElementos(const vector<int> &vector) {
    int suma = 0;
    for (int elemento : vector) {
        suma += elemento;
    }
    return suma;
    }
    void mostrar(int resultado){
        cout<<"La suma de los elementos del vector es "<<resultado<<endl;


    }

int main()
{
    int cantidad = cantidad_a_llenar();
    vector<int> datos;
    llenar(datos, cantidad);
    int resultado=sumarElementos(datos);
    mostrar(resultado);

    return 0;
}