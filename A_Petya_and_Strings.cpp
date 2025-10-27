#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;

    int length1=s1.size();
    int length2=s2.size();

    for(int i=0;i<length1;i++)
    {
        s1[i]=tolower(s1[i]);
    }
    
    for(int i=0;i<length2;i++)
    {
        s2[i]=tolower(s2[i]);
    }
    
    int count1=-1;
    int count2=-2;
    int count3=-3;;
    for(int i=0;i<length1;i++)
    {
        if(s1[i]!=s2[i])
        {
          count1++;
          char p=s1[i];
          char q=s2[i];
          if(p>q)
          {
              count2++;
          }
          else if(p<q)
          {
               count3++;
          }
          break;
        }
        
    }
    
    if(count1==-1)
    {
        cout<<"0"<<endl;
    }
    else if(count1!=-1 && count2!=-2)
    {
        cout<<"1"<<endl;
    }
    else if(count1!=-1 && count3!=-3)
    {
        cout<<"-1"<<endl;
    }
    

}