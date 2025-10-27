#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    double avg;
    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum= sum+a[i];
    }
    avg=sum*1.00/n;

    cout<<fixed<<setprecision(12)<<avg<<endl;


}