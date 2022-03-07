#include<stdio.h>
int main()
{
    int choice;
    while(1)
    {
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Hello\n");
            break;
        case 2:
            printf("Hi\n");
            break;
        case 3:
            printf("Welcome\n");
            break;
        case 4:
            printf("Everyone\n");
            break;
        default:
            printf("Invalid case.Please try again.\n");
        }
    }
    return 0;
}
