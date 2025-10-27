#include<stdio.h>
int main()
{
    double a;
    scanf("%lf",&a);
    a/=2;
    printf("%lf\n",a);

    double x= 5.65;
    double result= round(x);
    printf("The result is= %lf\n",result);

    getch();
}
