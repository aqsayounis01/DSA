//chall - conv decimal to hexadecimal
// to_string(int) include<string> is used to conert int to string 
#include<string>
#include<iostream>
using namespace std;
void dtoh(int d)
{
    string ans="";
    to_string(d);
    int temp = d,div,r;
    for (int  i = temp; i >=0 ; i--)
    {
        div=temp/16;
        r=temp%16;
string r1="";
        if(r==10)
        {
            r1="A";
            ans+=r1;
        }
        else if (r==11)
        {
            r1="B";
            ans+=r1;
        }
        else if (r==12)
        {
            r1="C";
            ans+=r1;
        }
        else if (r==13)
        {
            r1="D";
            ans+=r1;
        }
        else if (r==14)
        {
            r1="E";
            ans+=r1;
        }
        else if (r==15)
        {
            r1="F";
            ans+=r1;
        }

        else
            ans += to_string(r);



        temp=div;
        i=div;
        
    }
   
    for (int  i = ans.size()-1; i >=0 ; i--)
    {
       cout<<ans[i];
    }
    
    
    

}
int main()

{
    int d;
    cout<<"enter the decimal no to convert it into hexadecimal "<<endl;
    cin>>d;
   dtoh(d);  
    return 0;
}