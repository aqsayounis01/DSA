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
    
    



}