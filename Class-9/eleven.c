//Write a c program to print string characters in reverse order without library function
#include<stdio.h>
int main()
{
    char st[500];
    printf("Enter a String: ");
    gets(st);
    int l=strlen(st);
    int i;
    for(i=l-1;i>=0;i--)
    {
        printf("%c",st[i]);
    }
}
