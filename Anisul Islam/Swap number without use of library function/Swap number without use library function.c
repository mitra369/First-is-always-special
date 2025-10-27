#include<stdio.h>
int main()
{

    int num1,num2;
    scanf("%d%d",&num1,&num2);
    num1= num1-num2;
    num2=num1+num2;
    num1=num2-num1;
    printf("Number1=%d\n",num1);
    printf("Number2=%d",num2);
    return 0;
}
