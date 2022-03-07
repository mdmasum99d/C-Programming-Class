#include<stdio.h>
void add(int a,int b);
int main()
{
    add(5,6);
    add(10,3);
    add(2,7);
    add(50,8);
    add(58,8);
    add(58,9);

}
void add(int a,int b)
{
    printf("%d + %d = %d\n",a,b,a+b);
}
