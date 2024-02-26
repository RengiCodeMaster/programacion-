#include<iostream>
#include<cctype>
using namespace std ;
int main(){
    char caracter ;
    cout<<"digite el caracter: ";
    cin>>caracter;
    if(islower(caracter) && (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u'))
    {
        cout<<"\nEl caracter es una vocal minuscula";
    }
    else{

    cout<<"\nEl caracter  no es una vocal minuscula";
    }



    return 0;
}