/*jercicio 1: Gestión de Alumnos y Profesores
Crea dos clases, Alumno y Profesor. Haz que la clase Profesor sea
amiga de la clase Alumno. Los alumnos tienen información privada como
nombre, edad y número de estudiante. Los profesores deben
tener acceso a esta información para realizar evaluaciones.*/
#include <iostream>
using namespace std;
class Profesor;
class Alumnos
{
    private:
    string nombre;
    int edad;
    int numero_de_estudiantes;
    public:
    friend class Profesor;

};
int main()
{
    return 0;
}