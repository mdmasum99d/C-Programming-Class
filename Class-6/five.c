//Write a c program to take 7 array inputs from user and find their summation and average
#include<stdio.h>
int main()
{
    int a[7];
    int i;
    printf("Enter the 7 integer numbers:\n");
    for(i=0;i<7;i++){
        scanf("%d",&a[i]);
    }
    int s=0;
    double avg;
    for(i=0;i<7;i++){
        s=s+a[i];
    }
    printf("\nSummation = %d\n",s);
    avg = s/7;
    printf("Average = %.2lf\n",avg);
}
