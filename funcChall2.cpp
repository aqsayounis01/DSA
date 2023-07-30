#include<iostream>
using namespace std;
int sumn(int);

void trip(int n1,int n2, int n3)
{
    int a=max(n1,max(n2,n3));   // because it can take only 2 parametres
    
    if (a==n1)
    {
        if(n1*n1 == n2*n2 + n3*n3)
        {
            cout<<"it is a pythagorian triplet";
            return;
        }
    }
    else if (a==n3)
    {
        if(n3*n3 == n2*n2 + n1*n1)
        {
            cout<<"it is a pythagorian triplet";
            return;
        }
    }
    else
    {
        if(n2*n2 == n1*n1 + n3*n3)
        {
            cout<<"it is a pythagorian triplet";
            return;
        }
        
    }
    
cout<<"it is not a pythagorian triplet\n";
}
int main()

{
    //chall 1 = sum of n natural no's (either use for loop or formula - n(n+1)/2)
    int r;
    cout<<" enter the nth no:";
    cin>>r;
    sumn(r);



    //chall2 - check whether the following triplet is  a pythagorian triplet or not
    //(sum of any 2 square of no's = 3rd (max) square no or not)

    int n1,n2,n3;
    cout<<"enter the value of 3 no's:";
    cin>>n1>>n2>>n3;
    trip(n1,n2,n3);


    //chall3 - 

    return 0;
}

int sumn(int r)
{
    cout<<r*(r+1)/2<<endl;
    return 0;
}