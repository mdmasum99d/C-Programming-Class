//Write a c program to take 5 array inputs from user and display them with index
#include<stdio.h>
int main()
{
    int x[5],i;
    for(i=0;i<5;i++){
        scanf("%d",&x[i]);
    }
    printf("Display array elements:\n");
    for(i=0;i<5;i++){
        printf("x[%d] = %d\n",i,x[i]);
    }


}
