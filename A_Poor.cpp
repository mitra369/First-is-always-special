#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int a,b,c;
    cin >> a >>b >>c;
    if(((a==c) && a!=b) || ((a==b) && a!=c)||  ((b==c) && a!=b))
        cout << "Yes"<<endl;

    else
        cout << "No"<<endl;
    
    return 0;

}
        