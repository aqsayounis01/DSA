//conversion of decimal to binary
//adding two binary numbers
//101
//100

#include<iostream>
using namespace std;
#include<math.h>
int addb(int , int );
void dectobin(int ,int );

int btod(int n1,int n2)
{
    int ans=0;
    int d1=n1;
    int d2=n2 ;
    int d,r;
    string s=to_string(n1);
    string ss=to_string(n2);
    for (int  j=0; j <=s.size()-1 ; j++)
    {
        d=n1/10;
        r=n1%10;
        ans+=r*pow(2,j);
        
        n1=d;
    }
    int ans2=0;
    d=0,r=0;
    for (int  j=0; j <=ss.size()-1 ; j++)
    {
        d=n2/10;
        r=n2%10;
        ans2+=r*pow(2,j);
        n2=d;
    }
    cout<<ans<<" "<<ans2<<endl;
    addb(ans,ans2);
}

void dectobin(int d)
{
    int temp=d;
    int div,r;
    string ans="";
    for (int  i = temp; i >=0; i--)
    {
        div=temp/2;
        r=temp%2;
        ans += to_string(r);
        temp=div;
        i=div;      // to update the no of iterations (because we have to check that if the div is >=0 or  not )
    }

    for (int  i = ans.size()-1; i >=0; i--)
    {
        cout<<ans[i];
    }
    
    
}
int addb(int n1,int n2)
{
    int sum=n1+n2;
    dectobin(sum);

}
int main()

{
    int d;
    cout<<"enter the decimal no that you want to convert into binary:";
    cin>>d;
    dectobin(d);
    cout<<endl;
    // add 2 binary no's
    int s1,s2;
    cout<<"enter 2 binary no's"<<endl;
    cin>>s1>>s2;
    
    btod(s1,s2);

    
    return 0;
}