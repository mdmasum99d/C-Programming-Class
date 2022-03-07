//Write a c program to take n array inputs for user and find their summation and average
#include<stdio.h>
int main()
{
    int n;
    printf("Enter array length : ");
    scanf("%d",&n);
    int a[n];
    int i;
    printf("Display %d array elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int s= 0;
    float avg;
    for(i=0;i<n;i++){
        s=s+a[i];
    }
    avg = (float)s/n;
    printf("Summation = %d\n",s);
    printf("Average = %.2f\n",avg);
    return 0;

}
