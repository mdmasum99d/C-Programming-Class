#include<stdio.h>
int add();
int main()
{
    int k = add();
    printf("%d\n",k);
    return 0;
}
int add()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    return a+b;
}
