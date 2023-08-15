#include<iostream>
#include<math.h>
using namespace std;
int sumn(int);
int btod(int n)
{
    int d,r,s=0,temp=n;
    // we need to seperate the digits 
    for (int  i = temp,j=0; i >=0; i--,j++)
    {
        d=temp/10;
        r=temp%10;   // this remainder is the last digit
        s += r*pow(2,j);
        temp=d;
 
    }
    return s;
    
}
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
    cout<<endl;

    //chall3 - conversion in number system
    //1) Binary to decimal (sum of face value* place value) pv=2^

    int bno;
    cout<<"enter the binary no that you want to convert into decimal:";
    cin>>bno;
    cout<<btod(bno)<<endl;




    return 0;
}

int sumn(int r)
{
    cout<<r*(r+1)/2<<endl;
    return 0;
}