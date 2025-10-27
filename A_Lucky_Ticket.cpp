#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    string str;
    getline(cin,str);
    
    int sum1=0,sum2=0;
    for(int i=0;i<n/2;i++)
    {
        sum1=sum1+(str[i]-'0');
        break;
    }
    cout<<sum1;
    
}
