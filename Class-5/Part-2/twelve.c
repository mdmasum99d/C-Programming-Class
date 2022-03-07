///Write a c program to display to following series
/**
1.  1   2   3   4   5
2.  2   4   6   8   10
3.  1   3   5   7   9
4.  5   10  15  20  25
5.  A   B   C   D   E
*/
#include<stdio.h>
int main()
{
   int i;
   for(i=1;i<=5;i++)
   {
       printf("%d\t",i);
   }
   printf("\n\n----------------------------------------\n\n");
   for(i=2;i<=10;i=i+2)
   {
       printf("%d\t",i);
   }
   printf("\n\n----------------------------------------\n\n");
   for(i=1;i<=9;i=i+2)
   {
       printf("%d\t",i);
   }
   printf("\n\n----------------------------------------\n\n");
   for(i=5;i<=25;i=i+5)
   {
       printf("%d\t",i);
   }
   printf("\n\n----------------------------------------\n\n");
   for(i=65;i<=69;i++)
   {
       printf("%c\t",i);
   }
   return 0;
}
