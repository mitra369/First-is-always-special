#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;

int count,disk=0;
    for(int i=0;s1[i]!='\0';i++)
    { 
        count= abs(s1[i]-s2[i]);
        disk=disk+count;
        count=0;

        cout<<disk<<" ";
        
    }

    cout<<disk<<endl;
}