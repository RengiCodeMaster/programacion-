#include <iostream>
using namespace std;
class Rectangulo
{
private:
    float largo;
    float ancho;

public:
    Rectangulo(float, float);
    void perimetro();
    void area();
};
// inializar los atributos
Rectangulo::Rectangulo(float _largo, float _ancho)
{
    largo = _largo;
    ancho = _ancho;
}
void Rectangulo::perimetro()
{
    float _perimetro;
    _perimetro=(2*ancho)+(2*largo);
    cout<<"El perimetro del triangulo es "<<_perimetro<<endl;
}
void Rectangulo::area()
{
    float _area;
    _area=ancho*largo;
    cout<<"El area del rectangulo es "<<_area<<endl;
}
int main()
{
    Rectangulo r1=Rectangulo(12,2);
    Rectangulo r2(5,3);
    r1.perimetro();
    r2.area();  

    return 0;
}