#include <stdio.h>

int main() {
 int Time,Speed,Distance;
 double c;
 scanf("%d",&Time);
 scanf("%d",&Speed);
 Distance=Time*Speed;
 c=Distance*1.0/12;
 printf("%.3lf\n",c);



    return 0;
}
