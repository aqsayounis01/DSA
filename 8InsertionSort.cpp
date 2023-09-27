// insertion sort - insert the element from the unsorted array to its correct position in the sorted array



#include<iostream>
using namespace std;

int main()
{
    int arr[7]{7,6,5,4,3,2,2};

    for(int i=1;i<7;i++)  //unsorted
    {
        int cur =arr[i];
        int j=i-1;
        while (arr[j]>cur  && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
            
        }
        arr[j+1]=cur;   // because j-- in the last step, cur because  arr[i] will be changed when the elements fro the sorted array increaments 
        
    }

    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
}
