/// Write a c program to find the summation of the following series 1+2+3+4

#include<stdio.h>
int main()
{
    int i,s=0;
    for(i=1;i<=4;i++){
        s=i+s;
        printf("%d %d\n",i,s);
    }
    return 0;
}
