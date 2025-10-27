#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n] ,m1=n,m2=1,min;
    
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    min= abs(arr[0]-arr[n-1]);

    for(int i=0;i<n-1;i++)
    {
      int dif=abs((arr[i]-arr[i+1]));
      if(dif<min)
      {
        min=dif;
        m1=i+1;
        m2=i+2;
      }

    }

    cout<<m1<<" "<<m2<<endl;
}