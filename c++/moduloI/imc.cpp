#include<iostream>
using namespace std;
int main(){
double peso,altura;
double imc;
cout<<"INGRESE SU PESO: ";cin>>peso;
cout<<"INGRESE SU ALTURA: ";cin>>altura;
imc=peso/(altura*altura);
cout<<"\nSU IMC ES: "<<imc<<endl;




return 0;

}