#include<stdio.h>
int main()
{
   int big ,small,Remainder,result;
   printf("Enter big number= ");
   scanf("%d",&big);
   printf("Enter small number= ");
   scanf("%d",&small);

   result= big/small;

   Remainder= big-(small*result);
   printf("Remainder is= %d",Remainder);
   getch();




}
