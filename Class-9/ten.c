///Write a c program to print string charters in reverse order
//strrev(charArrayVariable);
#include<stdio.h>
int main()
{
 char st[500];
 printf("Enter a String: ");
 gets(st);
 printf("%s",strrev(st));

 return 0;
}

