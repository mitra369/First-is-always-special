#include<stdio.h>
int main()
{
    double R,pi=3.14159,Area;
    printf("Enter the value of R= ");
    scanf("%lf",&R);
    Area= pi*R*R;
    printf("Area of circle=%lf\n",Area);

    getch();
}
