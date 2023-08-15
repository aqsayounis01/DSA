#include<iostream>
using namespace std;

int main()
{
    // one way of definig 
    // int arr[3];
    // arr[0]=0;
    // arr[1]=1;
    // arr[2]=2;

    // second way for initializing 
    // int arr[5]={1,2,3,4,5};

    // we dont need to write the size when we are initializing 
    int arr[]={1,2,3,4,5};   

    cout<<arr[0]<<endl;

    for (int  i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }

    //taking input of array elements from the user
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int a[n];
    for ( int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int  i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    

    return 0;
}