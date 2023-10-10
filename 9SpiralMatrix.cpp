#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for (int  i = 0; i <n; i++)
    {
        for (int  j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
     for (int  i = 0; i <n; i++)
    {
        for (int  j = 0; j < m; j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
        
    }

    //traverse in spiral order 
    int rs=0, re=n-1,cs=0,ce=m-1;
    
    while (rs<=re && cs<=ce)
    {
        for (int  c = cs; c <= ce; c++)
        {
            cout<<a[rs][c]<<" ";
        }
        rs++;
        for (int  r= rs; r <=re; r++)
        {
            cout<<a[r][ce]<<" ";
        }
        ce--;
        for (int  c = ce; c>=cs; c--)
        {
         cout<<a[re][c]<<" ";   
        }
        re--;
        for (int  r = re; r>=rs; r--)
        {
            cout<<a[r][cs]<<" ";
        }
        cs++;
              
    }
    
    
    
}