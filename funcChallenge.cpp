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
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else{
        return n*fact(n-1);
    }
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


int ncr(int n, int r)
{
    int factn=1,factr=1;
    for (int  i = 1; i <=n; i++)
    {
        factn=factn*i;
    }
    for (int  i = 1; i <=r; i++)
    {
        factr=factr*i;
    }

    return factn/(fact(n-r)*factr);        //for n-r ! ew are calling the function that we made previously 
    
}

int pasc(int r)
{
    for (int  i = 0; i < r; i++)
    {
        for (int  j = 0; j <= i; j++)
        {
            cout<<ncr(i,j) <<" ";
        }
        cout<<endl;
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
    

    //challenge 3 - factorial of a  no using recursion
    int f;
    cout<<"enter a number to find its factorial ";
    cin>>f;
    cout<<fact(f)<<endl;


    //challenge 4 - find the no of combinations (ncr = n!/(n-r)! * r!)
    int n3,r1;
    cout<<"enter the value of n and r ";
    cin>>n3>>r1;
    cout<<ncr(n3,r1)<<endl;
    


    //challenge 5 -  pascal triangle (binomial cofficients)

/*  
    0c0
    1c0  1c1
    2c0  2c1  2c2 
    3c0  3c1  3c2  3c3
    4c0  4c1  4c2  4c3   4c4
*/
    int r2;
    cout<<"enter the value of rows:";
    cin>>r2;
    pasc(r2);

    return 0;
}