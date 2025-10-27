#include<bits/stdc++.h>
using namespace std;
int main()
{
  int p,q;
  cin>>p>>q;

  if(p>q)
  {
    cout<<q<<" "<<(p-q)/2<<endl;
  }

  else if(q>p)
  cout<<p<<" "<<(q-p)/2<<endl;

  else if(p=q)
  {
    cout<<p<<" "<<"0"<<endl;;
  }

}