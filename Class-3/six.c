#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    if(x > 0){
        printf("%d is a positive number",x);
    }
    else if(x==0){
        printf("%d is a neither positive or neither negetive",x);
    }
    else{
        printf("%d is a negetive number",x);
    }
    return 0;
}
