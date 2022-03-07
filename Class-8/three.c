#include<stdio.h>
void add(); // without arguments and without return value;
int main()
{
    add();
    return 0;
}
void add()
{
    int a,b,z;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    z=a+b;
    printf("%d + %d = %d\n",a,b,z);
}
