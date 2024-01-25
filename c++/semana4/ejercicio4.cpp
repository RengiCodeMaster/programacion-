#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int n;
    cout << "Ingrese un valor positivo : ";
    cin >> n;
    system("cls");
    while (n <= 0)
    {
        cout << "Por favor ingrese un numero positivo: ";
        cin >> n;
    }
    cout<<"La secuencia de : "<<n<<" es :\n";
    while (n != 1)
    {
        cout<<n<<" ";
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = 3*n + 1;
        }
    }
    cout<<n<<endl;
    return 0;
}
