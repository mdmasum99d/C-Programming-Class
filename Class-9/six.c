///Write a c program to read and write your full name use while loop
#include<stdio.h>
int main()
{
    char x[100];
    printf("Enter Your name : ");
    gets(x);
    int i=0;
    while(x[i] !='\0')
    {
        printf("%c",x[i]);
        i++;
    }
}
