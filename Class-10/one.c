#include<stdio.h>
int main()
{
    int x=10,y=20,temp;
    printf("Before swapping: ");
    printf("x= %d\ty=%d\n",x,y);

    temp=x;
    x=y;
    y=temp;

    printf("After Swapping: ");
    printf("x= %d\ty=%d\n",x,y);
    return 0;
}
