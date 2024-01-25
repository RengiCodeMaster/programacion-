#include<iostream>
#include <cmath>
using namespace std ;
int main(){
    double a,b,c,discriminante;
    cout<<"ingrese B: ";cin>>b;
    cout<<"ingrese A: ";cin>>a;
    cout<<"ingrese C: ";cin>>c;
    discriminante=pow(b,2)-4*(a*c);
    cout<<"\n la discrminante es: "<<discriminante<<endl;







    return 0;
}