#include<iostream>
using namespace std;

int BS (int n,int k,int a[])
{
    int s=0,e=n;
    while (s<=e)
    {
        int mid=(s+e)/2;
        if(k==a[mid])
        {
            return mid;
        }
        else if (k<a[mid])
        {
            e=mid-1 ;
        }
        else 
        {
            s=mid+1;
        }
    }
        return -1;    
}
int main()

{
    //Binary Search
    int n1;
    cout<<"enter the size of the array:";
    cin>>n1;
    int a[n1];
    cout<<"enter the elements:\n";
    for (int  i = 0; i < n1; i++)
    {
        cin>>a[i];
    }
    int k1;
    cout<<"enter the element you want to search:";
    cin>>k1;
    cout<<"index of the element is: "<<BS(n1,k1,a)<<endl;
    
    return 0;
}
    
