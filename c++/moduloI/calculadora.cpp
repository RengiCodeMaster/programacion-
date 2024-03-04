#include<iostream>
using namespace std ;
int main(){
    double n1,n2,resultado;
    char operacion;
    cout<<"DIGITE EL PRIMER NUMERO : ";cin>>n1;
    cout<<"DIGITE EL SEGUNDO NUMERO : ";cin>>n2;
    cout<<"SELECIONE LA OPERACION : ";cin>>operacion;
    switch (operacion){
        case '+':
        resultado=n1+n2;break;
        case '-':
        resultado=n1-n2;break;
        case'*':
        resultado=n1*n2;break;
        case'/':
        resultado=n1/n2;break;
    }
cout<<"\n RESULTADO: "<<resultado<<endl;

 return 0;
}
