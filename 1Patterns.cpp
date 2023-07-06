//rectangle pattern
#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    int r,c;
    cout<<"enter the no of rows:";
    cin>>r;
    cout<<"enter the no of columns:";
    cin>>c;

    for (int  i = 0; i < r; i++)
    {
    for (int  j = 0; j < c; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

cout<<"\n\n";


    //hollow rectangle pattern
    for (int  i = 0; i < r; i++)
    {

        if (i==0 || i==r-1)
    {
                for (int  j = 0; j < c; j++)
        {
            cout<<"* ";
            
        }  
    }
        else
        {
            cout<<"* ";
            for (int  k = 1; k <= c-2; k++)
            {
                cout<<"  ";
            }
            cout<<"* ";
        }
        
        cout<<endl;
    }

    cout<<"\n\n";


    //inverted half pattern

    for (int  i = 1; i <= r; i++)
    {
        for (int  j = i; j <= r; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    cout<<"\n\n";

    //half pattern after 180 degree rotation

    for (int  i = 1; i <= r; i++)
    {
        
            for (int  j= 1; j <=r; j++)
                 {
                   if (j<=r-i)
                   {
                    cout<<"  ";
                   }
                   
                    else{
                        cout<<"* ";
                    }
                }
            
            
            
            
        cout<<endl;
        
    }
    
    cout<<"\n\n";


    // a half pyramid with numbers 
    
    for (int  i =1;i<=r; i++)
    {
        for (int  j = 1; j<=i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    cout<<"\n\n";

    //floyds triangle

int cnt=1;
    for (int  i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<cnt <<"  ";
            cnt++;
        }
        cout<<endl;
        
    }
    cout<<"\n\n";



    //Butterfly pattern
int mn=0;
    for (int  i = 1; i <=r*2; i++)
    {
        for (int  j = 1; j<=r*2; j++)
        {
            if (i>r+1)   
            { 
                mn++;
                if (j<=r -mn || j> (r*2)-mn  )
                {
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
                
            }
            else if(i<=r+1)
            {
                if (j<=i || j>(r*2) -i  )
                    {
                        cout<<"* ";

                
                    }
            
            
                else
                    {
                         cout<<"  ";
                    }
            }
             
        }
        cout<<endl;
    }
    
    
    return 0;
}