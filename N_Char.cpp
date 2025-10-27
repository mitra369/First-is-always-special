#include<bits/stdc++.h>
using namespace std;
int main()
{
    char th;
    cin>>th;
    if(th>='A' && th<='Z')
    {
       cout<<char(th+32)<<endl;
    }
    else
    cout<<char(th-32)<<endl;
    
}