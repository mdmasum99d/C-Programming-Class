#include<stdio.h>
int main()
{
    int a,b,z;
    char k;
    do{
        printf("Enter two numbers : ");
        scanf("%d %d",&a,&b);
        z=a+b;
        printf("%d + %d = %d\n",a,b,z);

        printf("Do another?");
        scanf(" %c",&k);
    }while(k=='y' || k=='Y');
    return 0;
}
