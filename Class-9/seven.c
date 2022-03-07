//Write a c program to print string charcters one by one using loop.
#include<stdio.h>
int main()
{
    char st[500];
    printf("Enter a string : ");
    gets(st);

    int i=0;
    while(st[i] !='\0')
    {
        printf("%d\n",st[i]);
        i++;
    }
    return 0;
}
