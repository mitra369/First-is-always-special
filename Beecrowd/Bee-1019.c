#include <stdio.h>

int main() {
   int A,Hour,Minute,Second;
   scanf("%d",&A);
   Hour= A/3600;
   Minute= ((A-(Hour*3600))/60);
   Second= ((A-(Hour*3600))-(Minute*60));
   printf("%d:%d:%d\n",Hour,Minute,Second);

    return 0;
}
