
#include<stdio.h>
int main()
{
    int a;
    double b,P,Q;

    printf("Enter integer a= ");
    scanf("%d",&a);

    printf("Enter double b= ");
    scanf("%lf",&b);
    P= b/a;
    Q= a/b;
    printf("P=.3%lf\n",P);
    printf("Q=.3%lf\n",Q);
    return 0;
}
