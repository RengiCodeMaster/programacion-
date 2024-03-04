#include <iostream>
#include <algorithm>
using namespace std;
string llenar()
{
    string r;
    cout << "\nIngrese la palabra: ";
    cin >> r;
    return r;
}
string permutacion(string &a){

    sort(a.begin(),a.end());
    do
    {
        cout<<a<<endl;
    } while (next_permutation(a.begin(),a.end()));
    
    return a;
}

int main()
{
    string a;
    a = llenar();
    permutacion(a);

    return 0;
}