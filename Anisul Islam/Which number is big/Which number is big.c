#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter a,b,c= ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b){
        printf("a is greater than b\n");
    }

    else if (b>a){
        printf("b is greater than a\n");
    }

    else{
        printf("a is equal to b\n");
    }

    return 0;

}

// 12 10
