#include<iostream>
using namespace std;
int main()

{
    string s1="",s2="9",s3="00";
    int d=10;
    
    s1 +=to_string(d)+s3+s2;
    cout<<s1;
    cout<<s1.size();
    return 0;
}