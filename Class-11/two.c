#include<stdio.h>
int main()
{
    int a = 10;//normal variable
    int *p;//Pointer variable

    printf("Value of a: %d\n",a);
    printf("Address of a : %x\n",&a);
    printf("Address of p : %x\n",&p);

    p = &a;

    printf("Value of p : %x\n",&p);

    a = 100;

    printf("Value of a : %d\n",a);
    printf("Address of a : %x\n",&a);

    *p=25;
    printf("Value of a : %d\n",a);
    printf("Address of a : %x\n",&a);
}
