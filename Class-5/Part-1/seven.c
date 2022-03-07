///Ques: Write a c program to find the summation to the following series 1+2+3+.....+99+100
#include<stdio.h>
int main()
{
    int i=1,s=0;
    while(i<=100){
        s=s+i;
        i++;
    }
    printf("%d\n",s);
    return 0;
}

