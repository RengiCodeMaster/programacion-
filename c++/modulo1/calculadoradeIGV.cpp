#include<iostream>
using namespace std;
int main(){
const double IGV=0.18;
double precio,resultado;
cout<<"DIGITE EL PRECIO: ";cin>>precio;
resultado=precio+precio*IGV;
cout<<"\n EL PRECIO CON IGV ES: "<<resultado<<endl;

return 0;
}