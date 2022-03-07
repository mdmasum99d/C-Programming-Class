/** Write a menu-driven program to perform the following operations:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Display numbers from 1 to 10
7. Display alphabets from A to Z
8. Find the square of a number
9. Find the square of a number using pow() function
10. Find the square root of a number using sqrt()

*/
#include<stdio.h>
#include<math.h>
int main()
{
    printf("-------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Display numbers from 1 to 10\n");
    printf("7. Display alphabets from A to Z\n");
    printf("8. Find the square of a number\n");
    printf("9. Find the square of a number using pow() function\n");
    printf("10. Find the square root of a number using sqrt()\n");
    printf("-------------\n");

    int c;

    while(1)
    {
        printf("Enter your choice from aforementioned option : ");
        scanf("%d",&c);

        int a,b,z,i;
        char k;
        float n,y;

        switch(c)
        {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d",&a,&b);
            z=a+b;
            printf("%d + %d = %d\n",a,b,z);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d",&a,&b);
            z=a-b;
            printf("%d - %d = %d\n",a,b,z);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d",&a,&b);
            z=a*b;
            printf("%d * %d = %d\n",a,b,z);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%d %d",&a,&b);
            z=a/b;
            printf("%d / %d = %d\n",a,b,z);
            break;
        case 5:
            printf("Enter two numbers: ");
            scanf("%d %d",&a,&b);
            z=a%b;
            printf("%d %% %d = %d\n",a,b,z);
            break;
        case 6:
            for(i=1; i<=10; i++)
            {
                printf("%d\t",i);
            }
            printf("\n");
            break;
        case 7:
            k='A';
            while(k<='Z')
            {
                printf("%c\t",k);
                k++;
            }
            printf("\n");
            break;
        case 8:
            printf("Enter a number: ");
            scanf("%d",&a);
            z=a*a;
            printf("Square of %d is %d\n",a,z);
            break;
        case 9:
            printf("Enter a number: ");
            scanf("%d",&a);
            z= pow(a,2);
            printf("Square of %d is %d\n",a,z);
            break;
        case 10:
            printf("Enter a number: ");
            scanf("%f",&n);
            y= sqrt(n);
            printf("Square of %.0f is %f\n",n,y);
            break;
        case 11:
            exit(0);
            break;
        default:
            printf("Invalid choice.Please try again\n");
        }
    }
    return 0;
}
