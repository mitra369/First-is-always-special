#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int small=0,capital=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
           capital++;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            small++;
        }

    }
   // cout<<small<<" "<<capital;

    if(capital>small)

    {
        for(int i=0;i<str.size();i++)
        {
          str[i]=toupper(str[i]);
        }
    }

    else
    {
        for(int i=0;i<str.size();i++)
        {
          str[i]=tolower(str[i]);

        }
    }

   cout<<str<<endl;

}
