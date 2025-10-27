#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);

    for (int i = str.size(); i >= 0; i--)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {

            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'O' || str[i] == 'U' || str[i] == 'I' || str[i] == 'Y' || str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i' || str[i] == 'y')
            {
                cout << "YES" << endl;
                break;
            }

            else
            {
                cout << "NO" << endl;
                break;
            }
        }
    }
}
