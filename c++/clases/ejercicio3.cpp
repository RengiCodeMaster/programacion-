/*Una clase ListadeObjetos es una clase que contiene un arreglo en el que se pueden almacenar
objetos de la clase A, el arreglo puede guardar como máximo 20 objetos de la clase A.
Desarrolle una sencilla aplicación en la que se tienen las siguientes clases:

Una clase ListadeObjetos es una clase que contiene un arreglo en el que se pueden almacenar
objetos de la clase A, el arreglo puede guardar como máximo 20 objetos de la clase A.
Debe tener un método para almacenar un objeto de la clase A en el arreglo, este método
debe verificar que el arreglo tenga espacio disponible para guardar el objeto
. En caso contrario se debe mostrar un mensaje indicando que el arreglo está ll*/
#include <iostream>
using namespace std;

class A {
private:
    int serial;
    string nombre;
public:
    A(int s, string n) : serial(s), nombre(n) {}
    void mostrar() {
        cout << "Serial: " << serial << ", Nombre: " << nombre << endl;
    }
};

class ListaDeObjetos {
private:
    A* arreglo[20];
    int contador;
public:
    ListaDeObjetos() : contador(0) {}
    void agregar(A* a) {
        if (contador < 20) {
            arreglo[contador++] = a;
        } else {
            cout << "El arreglo está lleno." << endl;
        }
    }
    void mostrar() {
        for (int i = 0; i < contador; i++) {
            arreglo[i]->mostrar();
        }
    }
};

int main() {
    ListaDeObjetos lista;
    lista.agregar(new A(1, "Objeto1"));
    lista.agregar(new A(2, "Objeto2"));
    lista.mostrar();
    return 0;
}
