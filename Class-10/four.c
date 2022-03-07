//Write a c program to swap two numbers using without temporary variable
#include<stdio.h>
int main()
{
   int x=10,y=20;
   printf("Before swapping: ");
   printf("x = %d\ty = %d\n",x,y);

   x = x+y;//x=30
   y = x-y; //30-20=10
   x = x-y; //x=30-10=20

   printf("After Swapping: ");
   printf("x = %d\ty = %d\n",x,y);
   return 0;
}
