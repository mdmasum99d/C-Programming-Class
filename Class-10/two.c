#include<stdio.h>
void swap();//Function declaration
int main()
{
    swap(); //function calling
    return 0;
}
//function definition
void swap()
{
    int x,y,temp;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);

    printf("Before swapping : ");
    printf("x = %d\ty = %d\n",x,y);

    temp=x;
    x=y;
    y=temp;

    printf("After swapping: ");
    printf("x = %d\ty = %d\n",x,y);
}
