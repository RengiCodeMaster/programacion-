#include <iostream>
#include <string>
using namespace std;
int main()
{
    string cifrado = "ClaveAcceso";
    int clave;
    cout << "El texto cifrado : \n"<< cifrado;
    cout << "\nIngrese su clave : \n";
    cin >> clave;
    for (char &caracter : cifrado)
    {
        if (isalpha(caracter))
        {
            char base = isupper(caracter) ? 'A' : 'a';
            caracter = (caracter - base + clave) % 26 + base;
        }
    }
    cout << "La contrasena cifrado es: " << cifrado;

    return 0;
}
