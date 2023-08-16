#include<iostream>
using namespace std;

int main()

{
    //Linear Search
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array:\n";

    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];

    }
    cout<<endl;
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"enter the element you want:";
    int k;
    cin>>k;

    for (int  i = 0; i < n; i++)  //search from 0 - n index one by one = linear search
    {
        if (k==arr[i])
        {
            cout<<endl<<"element is present at index : "<<i<<endl;
            return 0;
        }
        
    }
    cout<<endl<<"element not found";
    cout<<endl;
    return 0;
}