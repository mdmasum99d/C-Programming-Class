// Write a c programe to display the following number series. 1,3,5....97,99

#include<stdio.h>
int main()
{
    int i;
    for(i=1; i<=100; i=i+2)
        printf("%d\t",i);
        printf("\n%d\n",i);
    return 0;
}
