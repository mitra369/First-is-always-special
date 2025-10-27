#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,div,remainder;

    printf("Enter two numbers= ");
    scanf("%d%d",&a,&b);


    sum=a+b;
    printf("Sum is= %d\n",sum);

    sub = a-b;
    printf("Sub is=%d\n",sub);

    mul= a*b;
    printf(" Mul is = %d\n",mul);

    div= a/b;
    printf(" Div is= %d\n",div);

    remainder= a%b;
    printf(" Remainder = %d\n",remainder);

     getch();
}
