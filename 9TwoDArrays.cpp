#include<iostream>
using namespace std;

int main()
{
    int a[2][5]={{1,2,3,4,5},{7,7,7,7,7}};

    for (int  i = 0; i < 2; i++)   //r
    {
        for (int  j = 0; j <5; j++)  //c
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}