#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3;
    cin>>a1>>a2>>a3;

    int b1,b2,b3;
    cin>>b1>>b2>>b3;

    int n;
    cin>>n;
    int p,q;

   if((a1+a2+a3)%5==0)
           p=(a1+a2+a3)/5;
   else
           p=(a1+a2+a3)/5 +1;

    if((b1+b2+b3)%10==0)
           q=(b1+b2+b3)/10;
   else
           q=(b1+b2+b3)/10 +1; 


       if(p+q<=n)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;   

}