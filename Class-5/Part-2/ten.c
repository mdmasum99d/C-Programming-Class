#include<stdio.h>
int main()
{
    int a,b,z;
    while(1)
    {
        printf("Enter two numbers : ");
        scanf("%d %d",&a,&b);
        z=a+b;
        printf("%d + %d = %d\n",a,b,z);
    }
    return 0;
}
