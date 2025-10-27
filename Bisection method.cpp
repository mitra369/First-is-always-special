#include<bits/stdc++.h>
using namespace std;
double errorcalculation(double old,double nu)
{
    return abs(old-nu)/nu;

}
double f(double c)
{
    return c*sin(c)+c*cos(c);
}
double bisection (double a,double b ,double e)
{
    double c=a;
    double error=1,old;
    int k=1;
    cout<<"Iteration A\tB\tC\tError\t"<<endl;
    while(error>e)
    {
        old=c;
        c=(a+b)/2;
        cout<<k<<"\t"<<setprecision(4) << fixed <<a<<"\t"<<b<<"\t"<<c<<"\t"<<error<<endl;
        if(f(c)==0)
        {
            return c;
            break;
        }
        else if(f(c)*f(a)<0)
        {
            b=c;
        }
        else
        a=c;
        error=errorcalculation(old,c);
        
        k++;
    }
    return c;
}
int main()
{
    double a,b;
    cin>>a>>b;
    double e=0.0001;
   double root= bisection(a,b,e);
   cout<<"final = "<<root<<endl;
}