#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<string> Nombre;
    string nombre;
    cout << "ingrese su nombre: ";
    cin >> nombre;
    Nombre.push_back(nombre);
    string word = Nombre[0];
    int vocales = 0;
    int consonantes = 0;
    int i = 0;
    while (i < word.length())
    {
        char c = word[i];
        if (isalpha(c))
        {
            if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u')
            {
                vocales++;
            }
            else
            {
                consonantes++;
            }
        }
        i++;
    }

    cout << "Cantidad de vocales: " << vocales << endl;
    cout << "Cantidad de consonantes: " << consonantes << endl;

    return 0;
}