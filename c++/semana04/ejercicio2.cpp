#include <iostream>
#include <string>
using namespace std;
int main()
{
    string palabra;
    bool esPalindromo = true;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    size_t longitud = palabra.length() - 1;

    for (size_t i = 0; i < palabra.length() / 2 && esPalindromo; i++)
    {
        if (palabra[i] != palabra[longitud - i])
        {
            esPalindromo = false;
        }
    }

    cout << ((true == esPalindromo) ? "Es palindromo" : "No es palindromo") << endl;

    return 0;
}
