#include <iostream>
using namespace std;
int main()
{
    int contadorCorrecto = 0;
    int contadorIncorrecto = 0;

    cout << "¿Cual es la capital de bolivia?\n";
    cout << "a) La Paz\tb) Buenos Aires \tc) Lima" << endl;

    char respuesta1;
    cin >> respuesta1;
    if (respuesta1 == 'a' || respuesta1 == 'A')
    {
        cout << "Respuesta correcta!" << endl;
        contadorCorrecto++;
    }
    else
    {
        cout << "Respuesta incorrecta." << endl;
        contadorIncorrecto++;
    }

    cout << "¿Cual es rio mas largo del mundo?\n";
    cout << "a) amazonas\tb) nilo \tc) huallaga" << endl;

    char respuesta2;
    cin >> respuesta2;
    if (respuesta2 == 'a' || respuesta2 == 'A')
    {
        cout << "Respuesta correcta!" << endl;
        contadorCorrecto++;
    }
    else
    {
        cout << "Respuesta incorrecta." << endl;
        contadorIncorrecto++;
    }

    cout << "¿Cual es el departamento mas gran del Peru? \n";
    cout << "a) loreto\tb) ucayali\tc) lima" << endl;

    char respuesta3;
    cin >> respuesta3;
    if (respuesta3 == 'a' || respuesta3 == 'A')
    {
        cout << "Respuesta correcta!" << endl;
        contadorCorrecto++;
    }
    else
    {
        cout << "Respuesta incorrecta." << endl;
        contadorIncorrecto++;
    }

    cout << "¿Cual es el pais con mas habitantes ?\n";
    cout << "a) Italia\tb) China\tc) India" << endl;

    char respuesta4;
    cin >> respuesta4;
    if (respuesta4 == 'c' || respuesta4 == 'C')
    {
        cout << "Respuesta correcta!" << endl;
        contadorCorrecto++;
    }
    else
    {
        cout << "Respuesta incorrecta." << endl;
        contadorIncorrecto++;
    }

    cout << "La respuestas correctas son : " << contadorCorrecto << endl;
    cout << "La repuestas incorrectas son : " << contadorIncorrecto << endl;
    return 0;
}
