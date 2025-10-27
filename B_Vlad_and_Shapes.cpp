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
        int arr[n][n];
        int row=n,col=n;

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cin>>arr[i][j];
            }
        }
        int count=0;
         for(int j=0;j<col;j++)
         {
            for(int i=0;i<row;i++)
            {
                if(arr[j][i]==1)
                count++;
            }
             if(count==1)
             break;           
         }

        if(count==1)
        cout<<"TRIANGLE"<<endl;
        else
        cout<<"SQUARE"<<endl;

        
    }
}