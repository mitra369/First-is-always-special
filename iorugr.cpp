#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>9)
            {
                int a=arr[i];
                while(arr[i]!=0)
                {
                  int rem=a%10;
                  sum1=sum1+rem;
                  a=a/10;

                }
            }
            else
                {
                    sum2=sum2+arr[i];
                }
                
        }

        cout<<sum1+sum2<<endl;

    }
}