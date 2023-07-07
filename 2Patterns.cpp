#include<iostream>
using namespace std;

int main()
{
    int r,c;
    cout<<"enter the no of rows : ";
    cin>>r;
    cout<<"enter the no of columns : ";
    cin>>c;


int temp=r;
    //inverted pattern with numbers
    for (int  i = 1; i <= r; i++)
    {
        for (int  j=1; j <=temp; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;    
        temp--;

    }
cout<<"\n\n";


    //0-1  pattern
bool val;
bool val2=true;
    for (int  i = 1; i <=r; i++)
    {
        for (int  j= 1; j <= i; j++)
        {
            if (j==1)
        {
            cout<<val2<<" ";
            val = !val2;
        }
        else{
            cout<<val<<" ";
            val = !val;
        } 

        }
        
        val2 = !val2;
        cout<<endl;
    }
    
    cout<<"\n\n";



    

}