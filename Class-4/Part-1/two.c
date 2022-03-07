#include<stdio.h>
int main()
{
    int m;
    while(1)
    {
        printf("Enter the marks: ");
        scanf("%d",&m);
        if(m>100 || m<0)
            printf("Your entered invalid marks.\n");
        else if(m>=80 && m<=100)
            printf("A+\n");
        else if(m>=70 && m<=79)
            printf("A\n");
        else if(m>=60 && m<=69)
            printf("A-\n");
        else if(m>=50 && m<=59)
            printf("B\n");
        else if(m>=40 && m<=49)
            printf("c\n");
        else if(m>=33 && m<=39)
            printf("D\n");
        else{
            printf("F\n");
        }
    }
}
