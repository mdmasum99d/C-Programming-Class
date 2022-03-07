/// Write a c program to find the summation of the following series 1+2+3+...+99+100
#include<stdio.h>
int main()
{
    int i,s=0;
    for(i=1;i<=100;i++){
        s = s+i;
        printf("%d\n",s);
    }
    return 0;
}

