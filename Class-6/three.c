//Write a c program to take 5 inputs from user and store them in an array.
#include<stdio.h>
int main()
{
   int x[5],i;
   printf("Enter 5 Numbers:\n");
   for(i=0;i<5;i++){
    scanf("%d",&x[i]);
   }

   printf("Display array elements: \n");
   for(i=0;i<5;i++){
    printf("%d\n",x[i]);

   }
   return 0;
}
