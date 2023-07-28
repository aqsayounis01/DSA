//check if a no is prime armstrong or perfect 
// PRIME
// a no can be divisibe by the numbers upto half of that number 
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the no you want to check";
    cin>>n;
    int chk=0;

    //prime
    for (int  i = 2; i <=n/2; i++)
    {
        if(n%i ==0)
        {
            chk=1;
        }
    }
    if(n==0||n==1)
    {
        cout<<"no is not prime \n";
    }
    else if (chk==0)
    {
        cout<<"no is prime\n";
    }
    else {
        cout<<"no is not prime \n";
    }
    
    cout<<"\n\n";


    //armstrong - number that is equal to the sum of cubes of its digits.
    int dr,rr,cr,sr=0,temp=n;
    for (int  i = temp; i >=0 ; i--)
    {
        
        dr=temp/10;
        rr=temp%10;  //last digit 
        cr=rr*rr*rr;
        sr += cr;
        temp=dr;        //repeat the process on these left out digits
    }
    cout<<"sum of cube of digits = "<<sr<<endl;
    if (sr==n)
    {
cout<<"yes it is armstrong no\n";
    }
    else
    {
        cout<<"no it is not a armstrong number"<<endl;
    }
    
    
//PERFECT NUMBER - a number that is equal to the sum of its proper divisors

int dis=0;
for (int  i = 1; i < n; i++)
{
    if(n==0)
    {
        cout<<"this is not  a perfect no";
    }
    if (n%i==0)
    {
        dis += i;

    }
    
}
if (dis==n)
{
    cout<<"this is a perfect no";
}

else{
    cout<<"this is not a perfect number ";
}





}