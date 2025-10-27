#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,remain;
    cin>>a>>b;
    int sum=0;
    for(int i=1;i<a;i++)
    {
        sum=sum+i;
        if(sum>b)
        {
            sum=sum-i;
            remain= b-sum;
            break;
        }
    }
    if(remain>=1)
    {
        for(int i=1;i<sum;i++)
        {

        }
    }
}