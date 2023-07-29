// list the prime no's between 2 no using function

#include<iostream>
using namespace std;
bool pr(int n)
{
    for (int  j = 2; j<= n/2; j++)    // can also be upto sqrt 
    {
        if (n%j==0)
        {
            return false;
        }
        
    }
    
    return true;
}

int fib(int i)
{
    if(i==1)
    {
        return 0;
    }
    else if (i==2)
    {
        return 1;
    }
    
else
{
    return fib(i-1)+fib(i-2);
}

    
}
int main()

{
    int n1,n2;
    int c=0;
    cout<<"enter 2 no's\n";
    cin>>n1>>n2;
    int temp = n1+1;
    for (int i =temp; i < n2; i++)
    {
      
        if (pr(i))
        {
            cout<<i<<endl;
        }
        
        
        
    }

    //challenge 2 - print fibonacci series using recursion
    int r;
    cout<<"enter the range of fibonacci series ";
    cin>>r;

    for (int  i = 1; i <=r; i++)
    {
        cout<<fib(i)<<endl;
    }
    
    
    return 0;
}