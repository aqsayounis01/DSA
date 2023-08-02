// stoi(string)- converts the string into integer    (or atoi())
// string.size() -  it returns the no of charactaers in the string 
// we can do indexing of string just as we do of arrays
// By subtracting '0'we can convert CHAR INTO INT

#include<math.h>
#include<iostream>
// #include<bits/stdc++.h>
using namespace std;

int htod(string h)
{
    
    int s=0;
    string temp=h;
    for (int  i = 0,j=temp.size()-1; i < temp.size(); i++,j--)
    {
        if(temp[i]>='A' && temp[i]<='F')
        {
            switch (temp[i])
            {
            case 'A':

                temp[i]='0'-'0';  // converted into int 
                temp[i]+= 10;       //0+10 =10
                s+= (temp[i])*pow(16,j);  
                break;
            case 'B':
                temp[i]='1'-'0';
                temp[i]+= 10;
                s+= (temp[i])*pow(16,j);
                break;
            case 'C':
                temp[i]='2'-'0';
                temp[i]+= 10;
                s+= (temp[i])*pow(16,j);
                break;
            case 'D':
                temp[i]='3'-'0';
                temp[i]+= 10;
                s+= (temp[i])*pow(16,j);
                break;
            case 'E':
                temp[i]='4'-'0';
                temp[i]+= 10;
                s+= (temp[i])*pow(16,j);
                break;
            case 'F':
                temp[i]='5'-'0';
                temp[i]+= 10;
                s+= (temp[i])*pow(16,j);
                break;
            default:
                cout<<"invalid no"<<endl;
                break;
            }

        }
        else
       s+= (temp[i]-'0')*pow(16,j);
    }
    
    
    
return s;

}


int main()

{
    //chall1 - hex to decimal

    string h;
    cout<<"enter the hexd no that you want to convert to decimal:";
    cin>>h;

    cout<<htod(h);



    return 0;
}