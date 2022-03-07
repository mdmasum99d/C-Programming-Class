//Write a c program to find the length of a string.
#include<stdio.h>
int main()
{
   char a[100];
   printf("Enter a string: ");
   get(a);
   int l=strlen(a);
   printf("Length of the given string is %d",l);
   return 0;
}
