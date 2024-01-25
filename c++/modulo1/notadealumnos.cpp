#include<iostream>
using namespace std;
int main(){
    double al1,al2,al3,al4,promedio;
    cout<<"ingrese la nota del primer alumno: ";cin>>al1;
    cout<<"ingrese la nota del segundo alumno: ";cin>>al2;
    cout<<"ingrese la nota del tercer alumno: ";cin>>al3;
    cout<<"ingrese la nota del cuarto alumno: ";cin>>al4;
    promedio=(al1+al2+al3+al4)/4;
    cout<<"\nLA NOTA DEL PRIMER ALUMNO ES: "<<al1<<endl;
    cout<<"\nLA NOTA DEL SEGUNDO ALUMNO ES: "<<al2<<endl;
    cout<<"\nLA NOTA DEL TERCER ALUMNO ES: "<<al3<<endl;
    cout<<"\nLA NOTA DEL CUARTO ALUMNO ES: "<<al4<<endl; 
    cout<<"\nEL PROMEDIO DE LOS 4 ALUMNOS ES: "<<promedio<<endl;


    return 0;
}
