#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int count=0;

   int pos=b;

   for(int j=a+1;j<b;j++)
    {
        for(int i=2;i<b;i++)
       {
        if(j%i!=0)
        {
          count++;
        }
       }
    }

   // cout<<count<<endl;
    if(count+1==b)
    {
        cout<<"YES"<<endl;
    }

    else
    cout<<"NO"<<endl;
    
}