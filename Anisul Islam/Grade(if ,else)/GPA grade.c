#include<stdio.h>
int main()
{
    int a;
    printf("Enter number a=");
    scanf("%d",&a);


    if(a>100){

        printf("Grade= Invalid\n");
    }

   else if(a>=80)
    {

        printf("grade=A+\n");
    }


    else if(a>69)
    {
        printf("Grade= A\n");
    }

    else if(a>59)
    {

        printf("Grade=A-\n");
    }

    else if(a>49)
    {

        printf("Grade=B\n");
    }

    else if(a>39)
    {

        printf("Grade=C\n");
    }

    else if (a>=33)
    {

        printf("Grade= D\n");
    }
    else
    {

        printf("Result=Fail\n");
    }
    getch();
}
