///Write a c program to read and write your full name use for loop
#include<stdio.h>
int main()
{
    char x[100];
    printf("Enter your name :");
    gets(x);

    int i=0;
    for(i=0;x[i] !='\0';i++)
    {
        printf("%c",x[i]);
    }
}
