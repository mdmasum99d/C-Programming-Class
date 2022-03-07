///1+2+3....+99+100 summation do...while
#include<stdio.h>
int main()
{
    int i=1,s=0;
    do{
        s=s+i;
        printf("%d Summation = \t",i);
        i++;
        printf("%d\n",s);
    }while(i<=100);
}
