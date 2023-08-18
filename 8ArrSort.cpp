#include<iostream>
using namespace std;

void sortarray(int a[],int n) 
{
    int temp=0;

    for (int  i = 0; i < n; i++)  // in each iteration, the largest element will move towardsd the end 
    {
        for (int  j = 0; j < n-1; j++) //-1 because we are checking with j+1 here
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
        
    }
    
}
int main()
{
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int a[n];
    cout<<"enter the elements:\n";
    for (int  i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    for (int  i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    sortarray(a,n);
    
    cout<<"sorted array:\n";
    for (int  i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
}