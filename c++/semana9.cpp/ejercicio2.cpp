#include<iostream>
using namespace std;
class Pokemon
{
    private:
    string nombre;
    int edad;
    float poder;
    public:
    Pokemon(string c,int b,float a):poder(a),edad(b),nombre(c){}
    void correr()
    {
        cout<<"Mi nombre es "<<nombre<<" mi edad es "<<edad<<" mi nivel de poder es "<<poder<<" y voy a correr mikin "<<endl; 
    }
    void volar()
    {
        cout<<"Mi nombre es "<<nombre<<" mi edad es "<<edad<<" mi nivel de poder es "<<poder<<" y voy a volar mikin "<<endl; 
    }
};
int main() 
{
    Pokemon p1("pikachu", 15, 185.0);
    p1.correr();
    return 0;
}
