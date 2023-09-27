// selection sort -  find a amin element in unsorted array and swp it with the element in the begining of the unsorted array
// 2loops- 0- n-2, 1 - n-1
//O(n^2)

#include<iostream>
using namespace std;
int main()

{
    
    int arr[5]={5,3,4,1,2};
int min=arr[1],temp=0;
    for (int  i = 0; i < 5-1; i++)  // points to the sorted array
    {
        for(int j=i+1;j<5;j++)      //points to the unsorted array
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for (int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    

    
    return 0;
}