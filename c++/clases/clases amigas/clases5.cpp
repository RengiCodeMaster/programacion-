/*Ejercicio 2: Archivo y Manejador de Archivos
Imagina que estás creando un sistema de manejo de archivos.
Crea una clase Archivo y una clase ManejadorDeArchivos. La clase
ManejadorDeArchivos debe ser amiga de la clase Archivo para poder
acceder a detalles privados del archivo, como su tamaño, tipo y
contenido. Esto permitirá al manejador de archivos realizar operaciones
como lectura, escritura y borrado.*/
#include<iostream>
using namespace std;
class Manejo ;
class Archivo 
{
    private:
    int tam;
    string contenido;
    public:
    Archivo(int _tam,string _contenido):tam(_tam),contenido(_contenido){}
    friend class Manejo;
};
class Manejo 
{
    private:
    int contar;
    public:
    Manejo(int _c):contar(_c){}
    void contararchivos()
    {
        cout<<
    }

    
};