#include <iostream>
using namespace std;
struct str
{
    int t[3];
    char s[3];

};
int main()
{
    str z[3];
    for (int i=0;i<3;i++)
    for(int j=0;j<3;j++){
        z[i].s[j]='0'+i+j;
        z[j].t[i]=i+1;
    }
    cout<<z[0].s[1]<<z[1].t[2]<<z[2].s[0];
    

    return 0;
}