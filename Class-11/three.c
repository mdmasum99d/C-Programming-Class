//With return and with arguments
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);//10 20

    printf("Before swapping : ");
    printf("a %d\tb = %d\n",a,b);

    swap(&a,&b);//Call by reference

    printf("After swapping: ");
    printf("a = %d\tb = %d\n",a,b);
    return 0;
}
void swap(int *x,int *y)
{
    int temp = *x;//10
    *x=*y;//20
    *y=temp;//10
}
