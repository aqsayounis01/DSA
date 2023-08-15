#include<iostream>
using namespace std;

int main()
{
    
    int n;
    cout<<"enter the size of the array:";
    cin>>n;

    int a[n];

    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    int max=a[0],min=a[0];

    for (int  i = 0; i < n; i++)
    {
        if (a[i]<min)
        {
            min= a[i];
        }
        if (a[i]>max)
        {
            max=a[i];
        }
    }

    cout<<"max and min is: "<<max<<" "<<min<<endl;
    

    
    



    return 0;
}