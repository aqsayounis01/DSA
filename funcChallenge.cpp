// list the prime no's between 2 no using function

#include<iostream>
using namespace std;
bool pr(int n)
{
    for (int  j = 2; j<= n/2; j++)
    {
        if (n%j==0)
        {
            return false;
        }
        
    }
    
    return true;
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
    
    return 0;
}