#include <stdio.h>

int main() {
   int A,Year,Month,Day;
   scanf("%d",&A);
   Year= A/365;
   Month= ((A-(Year*365))/30);
   Day= ((A-(Year*365))-(Month*30));
   printf("%d ano(s)\n",Year);
   printf("%d mes(es)\n",Month);
   printf("%d dia(s)\n",Day);

    return 0;
}

