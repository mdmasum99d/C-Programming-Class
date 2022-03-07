#include<stdio.h>
int main()
{
    printf("Your menu bar\n---------------------------------------------------\n");
    printf("1.Multiplication Table for loop\n");
    printf("2.Your print number 1,2,3.....n for loop\n");
    printf("3.Print odd number 1,3,5.....n for loop\n");
    printf("4.Print even number 2,4,6...n for loop\n");
    printf("5.Print number series 5,10,15...n for loop\n");
    printf("6.Print number series n...3,2,1 for loop\n");
    printf("7.Print number series n...6,4,2 for loop\n");
    printf("8.Print Capital Alphabet for loop\n");
    printf("9.Print even Capital Alphabet A,C,E... for loop\n");
    printf("10.Print Capital Alphabet number for loop\n");
    printf("11.Print Small Alphabet for loop\n");
    printf("12.Print Small Alphabet number for loop\n");
    printf("13.Exit\n");

    printf("---------------------------------------------------\n\n");



    while(1)
    {
        int c;
        int i,n;
        char x;
        printf("\nEnter your choice from menu bar option : ");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            printf("\nEnter the value of n : ");
            scanf("%d",&n);
            for(i=1; i<=10; i++)
            {
                printf("%d * %d = %d\n",n,i,i*n);
            }
            break;
        case 2:
            printf("\nEnter the value of n : ");
            scanf("%d",&n);
            for(i=1; i<=n; i++)
            {
                printf("%d,",i);
            }
            break;
        case 3:
            printf("\nEnter the value of n : ");
            scanf("%d",&n);
            for(i=1; i<=n; i=i+2)
            {
                printf("%d,",i);
            }
            break;
        case 4:
            printf("\nEnter the value of n : ");
            scanf("%d",&n);
            for(i=2; i<=n; i=i+2)
            {
                printf("%d,",i);
            }
            break;
        case 5:
            printf("\nEnter the value of n : ");
            scanf("%d",&n);
            for(i=5; i<=n; i=i+5)
            {
                printf("%d,",i);
            }
            break;
        case 6:
            printf("\nEnter the value of n : ");
            scanf("%d",&n);
            for(i=n; i>=1; i=i-1)
            {
                printf("%d,",i);
            }
            break;
        case 7:
            printf("\nEnter the value of n : ");
            scanf("%d",&n);
            for(i=n; i>=1; i=i-2)
            {
                printf("%d,",i);
            }
            break;
        case 8:
            for(x='A';x<='Z';x++)
            {
                printf("%c\t",x);
            }
            break;
        case 9:
            for(x='A';x<='Z';x=x+2)
            {
                printf("%c\t",x);
            }
            break;
        case 10:
            for(x='A';x<='Z';x++)
            {
                printf("%d\t",x);
            }
            break;
        case 11:
            for(x='a';x<='z';x++)
            {
                printf("%c\t",x);
            }
            break;
        case 12:
            for(x='a';x<='z';x++)
            {
                printf("%d\t",x);
            }
            break;
        case 13:
            exit(0);
            break;
        default:
            printf("Invalid choice please try again\n");
            break;
        }

    }



}

