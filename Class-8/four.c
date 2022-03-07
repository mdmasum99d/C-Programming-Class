#include<stdio.h>
int add(int a,int b); // With parameter and without return
int main()
{
    int res = add(10,5); // calling with 2 argument
    printf("%d\n",res);
    printf("%d\n",add(50,60));

    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    int m = add(x,y);
    printf("%d\n",m);
    return 0;
}

int add (int a, int b)
{
    return a+b;
}
