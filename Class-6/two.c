#include<stdio.h>
int main()
{
    int x[5]={2,4,5,7,9};
    int i,s=0;
    for(i=0;i<5;i++){
        printf("%d\n",x[i]);
        s=s+x[i];
    }
    printf("Summation = %d\n",s);
    return 0;
}
