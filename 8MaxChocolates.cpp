// 1 rupee - 1 chocolate
// 3 wrapper = 1 chocolate 
// 15 rupees =?
#include<iostream>
using namespace std;

int main()
{
    int c=0,wc=0,w=0;
    for(int i=1;i<=15;i++)
    {
        c++;       // 1  rupee
        if(i%3==0)
        {
            
            c++;     // 3 wrappers =1 chocolates
            w++;       // these chocolates will also have wrappers
            if(w%3==0)
            {
                    wc++;    
            }
        }
            
  
    }
cout<<c<<" "<<wc<<" "<<w<<endl;   //from 5 wrapper we got 1 chocolate -> 1 +2=3 => 1 more chocolate 
  cout<<c+wc+1;
}