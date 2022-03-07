///Write a c program to find the largest element from an array.
#include<stdio.h>
int main()
{
   int n;
   printf("Enter array length : ");
   scanf("%d",&n);
   int a[n],i;

   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   int smallest = a[0];
   for(i=1;i<n;i++){
    if(smallest>a[i]){
        smallest = a[i];
    }
   }
   printf("Smallest = %d\n",smallest);
}

