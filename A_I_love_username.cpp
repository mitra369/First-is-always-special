#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int count1=0,count2=0;
    int max=arr[0];
    int min=arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            count1++;
            max=arr[i];
        }

        if(arr[i]<min)
        {
            count2++;
            min=arr[i];
        }
    }

    



    cout<<count1+count2<<endl;
}