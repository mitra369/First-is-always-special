#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int count=-1;

    reverse(str2.begin(),str2.end());

    for(int i=0; i<str1.size(); i++)
    {
        if(str1[i]==str2[i])
        {
          count++;
        }
        else
        {
            count=-1;
            break;
        }
    }

    if(count==-1)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;

}