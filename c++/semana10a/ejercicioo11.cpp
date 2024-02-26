/*Define una clase base llamada FiguraGeometrica con métodos para calcular el
área y el perímetro. Luego, crea subclases como Rectangulo, Circulo y Triangulo
que hereden de la clase base y sobrescriban los métodos para calcular el área y 
el perímetro según la figura.*/
#include<iostream>
using namespace std;
class FiguraGeometrica
{
    protected:
    int resultado;
    public:
    FiguraGeometrica(int _resultado):resultado(_resultado){}
    virtual void area()=0;

};
class Triangulo : public FiguraGeometrica
{
    private:
    int base;
    int altura;
    public:
    Triangulo(int resultado,int _base,int _altura):FiguraGeometrica(resultado),base(_base),altura(_altura){}
    virtual void area() override
    {
        resultado=(base*altura)/2;
        cout<<"El area del triangulo es: "<<resultado<<endl;
    }

};
class Rectangulo : public FiguraGeometrica
{
    private:
    int base;
    int altura;
    public:
    Rectangulo(int resultado,int _base,int _altura):FiguraGeometrica(resultado),base(_base),altura(_altura){}
    virtual void area() override
    {
        resultado=base*altura;
        cout<<"El area del rectangulo es: "<<resultado<<endl;
    }
};
int main()
{
    cout<<"****TRIANGULO****"<<endl;
    Triangulo t1(0,5,4);
    t1.area();
    cout<<"****RECTANGULO****"<<endl;
    Rectangulo r1(0,5,4);
    r1.area();
    return 0;
}