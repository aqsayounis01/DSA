// in order to reverse a no , 
// 1) divide the no by 10
// 2) store its remainder
// continue the process on the left out digits of that numbers


#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"enter the no of digits in the no:";
     int r;
    cin>>r;
    cout<<"enter the no that you want to reverse:";
    cin>>n;

int dr,rr,temp=n;
    for (int  i = 1; i <=r; i++)
    {
        dr=temp/10;   //left out no
        rr=temp%10;     //last digit
        cout<<rr;
        temp=dr;

    }
    

}