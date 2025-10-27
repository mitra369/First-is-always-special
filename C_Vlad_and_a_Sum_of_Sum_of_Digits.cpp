#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    else
    {
        return n % 10 + sumOfDigits(n / 10);
    }
   
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Calculate the sum of digits for each number from 1 to n
        int totalSum = (n * (n + 1)) / 2 - sumOfDigits(n);

        cout << totalSum << endl;
    }

    return 0;
}
