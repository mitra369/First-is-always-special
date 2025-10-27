#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y,w;
    cin>>y>>w;

    
    if(y==1 && w==1)
    cout<<"1/1"<<endl;
    else if(y>=w)
    {
      if(y==2)
      cout<<"5/6"<<endl;
      else if(y==3)
      cout<<"2/3"<<endl;
      else if(y==4)
      cout<<"1/2"<<endl;
      else if(y==5)
      cout<<"1/3"<<endl;
      else if(y==6)
      cout<<"1/6"<<endl;
    }

    else
    {
        if(w==2)
      cout<<"5/6"<<endl;
      else if(w==3)
      cout<<"2/3"<<endl;
      else if(w==4)
      cout<<"1/2"<<endl;
      else if(w==5)
      cout<<"1/3"<<endl;
      else if(w==6)
      cout<<"1/6"<<endl;
      
       
    }
    
}