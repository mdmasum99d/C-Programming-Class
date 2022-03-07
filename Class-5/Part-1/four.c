#include<stdio.h>
int main()
{
    int i,s=0;
    for(i=1;i<=100;i++){
        printf("%d\t",i);
        s = s+i;
        printf("%d\n",s);
    }
    return 0;
}
