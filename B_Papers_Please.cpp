#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin >> n;
    int ar[n];
    int count = 1;
    for (int i = 0; i < n; ++i)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < n; ++i)
    {
        if (ar[i] % 2 == 0)
        {
            if (ar[i] % 3 == 0 || ar[i] % 5 == 0)
            {
                continue;
            }
            else{
                count=0;
                break;
            }
        }
    }
    if (count == 1)
        cout << "APPROVED\n";
    else
        cout << "DENIED\n";
}

