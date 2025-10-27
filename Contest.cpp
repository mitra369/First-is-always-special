#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ve vector
#define pb push_back
#define ff first
#define ss second
const int N = 1e5 + 10;

void solve()
{
    
    int a,b,c;
    cin >> a >>b >>c;
    if(((a==c) && a!=b)  ((a==b) && a!=c)  ((b==c) && a!=b))
    {
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
    
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}