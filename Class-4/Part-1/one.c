#include<stdio.h>
int main()
{
    int m;
    while(1)
    {
        printf("Enter the Your marks: ");
        scanf("%d",&m);
        if(m>=80)
            printf("A+\n");
        else if(m>=70)
            printf("A\n");
        else if(m>=60)
            printf("A-\n");
        else if(m>=50)
            printf("B\n");
        else if(m>=40)
            printf("C\n");
        else if(m>=33)
            printf("D\n");
        else
        {
            printf("F\n");
        }
    }
}
