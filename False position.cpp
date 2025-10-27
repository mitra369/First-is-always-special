#include <bits/stdc++.h>
using namespace std;

double error_find(double c_experimental, double c_actual)
{
    return abs(c_experimental - c_actual) / c_actual;
    
}

double f(double x)
{
    return x* sin (x) + x * cos (x);
}

double false_position(double a, double b, double ea)
{
    double error_tm = 1, c = b, c_experimental;
    int i=0;
    cout<<"Iteration"<<'\t'<<'A'<<'\t'<<'B'<<'\t'<<'C'<<'\t'<<"Error"<<endl;
    
    while (error_tm > ea)
    {
        c_experimental = c;
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));
        cout<<i<<" "<<'\t'<<setprecision(4)<<fixed<<'\t'<<a<<'\t'<<b<<'\t'<<c<<'\t'<<error_tm<<endl;
        
         i++;

        if (f(c) == 0)
            break;
        if (f(c) * f(a) < 0)
            b = c;
        else
            a = c;

        error_tm = error_find(c_experimental, c);
    }
    return c;
}

int main()
{

    double a, b, ea = 0.0001;
    cin >> a >> b;
    double root = false_position(a, b, ea);
    cout <<"Root:"<<root<<endl;
}