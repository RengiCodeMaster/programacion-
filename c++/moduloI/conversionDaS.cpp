#include<iostream>
using namespace std;
int main(){
    const double cambio=3.79;
double cantidad,resultado;
char moneda;
cout<<"DIGITE LA CANTIDAD: ";cin>>cantidad;
cout<<"A QUE MONEDA DESEA EL CAMBIO(D dolares , S SOLES): ";cin>>moneda;
 switch (moneda) {
 case's':
 case'S':
 resultado=cantidad*cambio;break;
 case 'd':
 case'D':
 resultado=cantidad/cambio;break;

} 
cout<<"\n SU CAMBIO ES: "<<resultado<<endl;
return 0;

}