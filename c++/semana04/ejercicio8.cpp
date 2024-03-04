
#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int> n = {10, 6 , 2 ,1 ,9, 14};
    int mayorVector = n[0];
    for (int i = 1; i < n.size(); ++i)
    {
        if (n[i] >= mayorVector)
        {
            mayorVector = n[i];
            break;
        }
    }
    cout << "El elemneto mayor del vector  es: " << mayorVector;

    return 0;
}
