#include<iostream>
using namespace std;

int  bs(int k, int a[],int s,int e)
{
    int mid=(s+e)/2;
    //base case 
    if(s>e)
    {
        return -1;
    }
    if(a[mid]==k)
    {
            return mid;
    }

    if(s<=e)
      {   //options
        if(a[mid]>k)
        {
            e=mid-1;
            return bs(k,a,s,e);
        }
        else{
            s=mid+1;
            return bs(k,a,s,e);;
        }
      }
}
int main()
{
    int n;
    cout<<"enter the size:";
    cin>>n;
    int a[n];
    cout<<"enter the elements:";
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int k;
    cout<<"enter the value of k:";
    cin>>k;
    int s=0,e=n;
    cout<<"element found at index:"<<bs(k,a,s,e);
   
}