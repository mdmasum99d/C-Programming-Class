//Without return with arguments
#include<stdio.h>
void swap (int x,int y);//function declaration
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    swap(a,b);//function calling
    return 0;
}
//function definiton
void swap(int x,int y)
{
    printf("Before Swapping: ");
    printf("x = %d\ty = %d\n",x,y);

    int temp = x;
    x=y;
    y=temp;

    printf("After swapping: ");
    printf("x = %d\ty = %d\n",x,y);
}
