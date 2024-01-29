#include<iostream>
using namespace std ;
int main(){
    float arr[3][3]={{.1,1.,10.},{10.,.1,1.},{.1,10.,1.}};
    float x=1.;
    for(int i=0;i<3;i++)
    {
        x*=arr[i][i];
    }
    cout << x<<endl; 




    return 0;
}