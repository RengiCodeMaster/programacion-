#include <iostream>
using namespace std;
int main()
{
    int edad;
    cout << "digite su edad: ";
    cin >> edad;
    if ((edad >= 18) && (edad <= 25))
    {
        cout << "\nSu edad si se encuntra en el rago requerido";
    }
    else
    {
        cout << "\nSu edad no se encuentra en en rago requerido";
    }

    return 0;
}
