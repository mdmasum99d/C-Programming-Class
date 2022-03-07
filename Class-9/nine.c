///Write a c program to find the length of a string without library function
#include<stdio.h>
int main()
{
    char a[100];
    printf("Enter a string: ");
    gets(a);
    int i = 0;
    while(a[i] !='\0')
    {
        i++;
    }
    printf("Length of the given string is %d",i);
}
