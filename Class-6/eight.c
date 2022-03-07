#include<stdio.h>
int main()
{
    int x[]={1,2,3,4,5,6};
    int arrayLength = sizeof(x)/sizeof(int);
    printf("Array Length: %d\n",arrayLength);
    int i;
    for(i=0;i<arrayLength;i++){
        printf("%d\n",x[i]);
    }
    return 0;
}
