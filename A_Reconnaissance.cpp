#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j;
    cin>>n>>m;
    int arr[n],count=0;
    for( i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]-arr[i]<=m)
            {
                count= count+2;
            }
        }
    } 
    

     cout<<count<<endl;
}

    
    
    