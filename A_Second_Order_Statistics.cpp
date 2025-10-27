#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    for(i=1; i<n && arr[i]==arr[i-1];i++);
    
        if(i==n)
        cout<<"NO"<<endl;
        else
        cout<<arr[i]<<endl;
    

    
}