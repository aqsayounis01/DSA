#include<iostream>
#include<iomanip>
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


//rhombus pattern
int w=r+1;
for (int  i = 1; i <= r; i++)
{
    cout<<setw(w);
    for (int  j = 1; j<= c; j++)
    {
        cout<<"* ";
    }
    w--;
    cout<<endl;
}
cout<<"\n\n";

//triangle no pattern
w=r+1;
for (int  i = 1; i <= r; i++)
{
    cout<<setw(w);
    for (int  j = 1 ;j<=i; j++)
    {
        cout<<j<<" ";
        
    }
    cout<<endl;
    w--;
}
cout<<"\n\n";

// palindromic triangle 
w=r+1;
for (int  i = 1; i <=r; i++)
{
    int k=(i*2)-1;
    
    cout<<setw(w);
    for (int  j=i; j >1; j--)
    {
        cout<<j;
    }
    for (int k = 1;k<=i; k++)
    {
        cout<<k;
    }
    
    w--;
    cout<<endl;
}
cout<<"\n\n";



//diamond pattern
w=r;
for (int  i = 1; i <= r ; i++)
{
    cout<<setw(w);
    for (int  j = 1; j<=i; j++)
    {
        cout<<"*";
    }

    for (int k=1; k < i; k++)
    {
        cout<<"*";
    }
cout<<endl; 
  
w--;

}
int t=r;
w=1;
for (int i = 1; i <=r; i++)
{
    cout<<setw(w);
    for (int  j=t;j>=1; j--)
    {
        cout<<"*";
    }
    for (int  k= 1; k < t; k++)
    {
        cout<<"*";
    }
    
    cout<<endl;
    t--;
    w++;

}
cout<<"\n\n";


//zigzag pattern

for (int  i = 1; i <=3; i++)
{

    for (int  j = 1; j<=r; j++)
    {
        if ( ( (i+j)%4==0 ) || ( (i==2) &&(j%2==0) ) )
        {
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
    }
cout<<"\n";
w--;
    
}

















}