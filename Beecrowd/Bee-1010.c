#include <stdio.h>

int main() {

    int a,b,c,d;
    double e,f,result;
    scanf("%d%d%lf",&a,&b,&e);
    scanf("%d%d%lf",&c,&d,&f);
    result= (b*e)+(d*f);
    printf("VALOR A PAGAR: R$ %.2lf\n",result);
    return 0;
}
