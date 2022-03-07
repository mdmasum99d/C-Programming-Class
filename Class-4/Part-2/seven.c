//Write a c program to display the following number series. 1,2,3,4.....n
#include<stdio.h>
int main()
{
    int i,n;
    while(1)
    {
        printf("\nEnter the value of n: ");
        scanf("%d",&n);
        for(i=1; i<=n; i++)
            printf("%d\t",i);
    }
    return 0;
}
