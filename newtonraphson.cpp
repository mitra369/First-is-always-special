#include<bits/stdc++.h>
using namespace std;
 
double func(double x) {
    return x * x * x + 2 * x * x - 4;
}


double dfunc(double x) {
    return 3 * x * x + 4 * x;
}


double error_find(double c_pre, double c_new) {
    return abs((c_pre - c_new) / c_new);
}

double newton_raphson(double a, double ea) {
    double c_pre, c = a;
    double e_tm = 1;
    int i = 1;

    cout<<"Iteration"<<'\t'<<"C_Pre"<<'\t'<<'C'<<'\t'<<"Error"<<endl;


    while (e_tm > ea) {
        c_pre = c;
        c = a - func(a) / dfunc(a);
        a = c;
        e_tm = error_find(c_pre, c);
        cout<<i<<" "<<'\t'<<setprecision(4)<<fixed<<'\t'<<c_pre<<'\t'<<c<<'\t'<<e_tm<<endl;
        i++;

        if (func(c) == 0 || e_tm < ea) {
            break;
        }
    }
    return c;
}

int main() {
  
    double a, ea = 0.0001;
    cin>>a;
 
    double root = newton_raphson(a, ea);
    cout << "Root is: " << root << endl;
    
    return 0;
}