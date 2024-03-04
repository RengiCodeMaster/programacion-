/*Crea un vector de caracteres y pide al usuario que ingrese un carácter
. Luego, cuenta y muestra cuántas veces aparece ese carácter en el vector.*/
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<char> caracteres;
    int cantidad;
    cout << "\nIngrese la cantidad de caracteres:  ";
    cin >> cantidad;
    for (int i = 0; i <cantidad; i++)
    {
        char caracter;
        cout<<"\nIngrese el caracter: ";
        cin>>caracter;
        caracteres.push_back(caracter);
    }
    char caracter_a_contar;
    cout<<"\nIngrese el carcter que desea contar: ";
    cin>>caracter_a_contar;
    int caracter_contado=count(caracteres.begin(),caracteres.end(),caracter_a_contar);
    cout<<"\nEl caracter "<<caracter_a_contar<<" aparece "<<caracter_contado<<" veces en el vector. "<<endl;


    return 0;
}