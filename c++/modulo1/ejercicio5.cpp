#include <iostream>
using namespace std;
int main()
{
    char letra;
    cout << "Digite la letra: ";
    cin >> letra;
    switch (letra)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': cout<<"\nLa letra es una vocal minuscula";break;
    default:cout<<"\nLa letra no es una vocal minuscula";break;

    }

    return 0;
}
