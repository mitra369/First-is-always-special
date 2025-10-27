#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,r1,r2,c1,c2,k,sum=0;
    int A[10][10], B[10][10], C[10][10];

    cout<<"Enter rows and columns for Matrix A = ";
    cin>>r1>>c1;
    cout<<"Enter rows and columns for Matrix B = ";
    cin>>r2>>c2;

    cout<<"Enter elements for A = \n";
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            cin>>A[i][j];
        }
        cout<<endl;
    }

    printf("\n\nEnter elements for B = \n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            cin>>B[i][j];
        }
        cout<<endl;
    }

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum=sum + A[i][k]*B[k][j];
            }
            C[i][j]=sum;
            sum=0;
        }
    }

   cout<<"print A"<<endl;
    for(i=0; i<r1; i++)

    {
        for(j=0; j<c1; j++)
        {

            cout<<A[i][j]<<" ";

        }
        cout<<endl;
    }

    cout<<"print B"<<endl;
    for(i=0; i<r2; i++)

    {
        for(j=0; j<c2; j++)
        {

            cout<<B[i][j]<<" ";

        }
        cout<<endl;
    }

    cout<<"print A*B"<<endl;
    for(i=0; i<r1; i++)

    {
        for(j=0; j<c2; j++)
        {

            cout<<C[i][j]<<" ";

        }
        cout<<endl;
    }



    return 0;


}


