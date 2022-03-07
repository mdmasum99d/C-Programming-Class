/** Write a c program to perform the following operations by creating 7 user defined functions.
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Find the area of a circle
6. Find the square of a number
7. Show multiplication table
*/
#include<stdio.h>
#include<math.h>
void add();//function declaration
void sub();//function declaration
void mul(); //function declaration
void div(); //function declaration
void area(); //function declaration
void square(); // function declaration
void table(); // function declaration

int main()
{
    int c;
    while(1)
    {
        printf("Enter your choice: ");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            add(); // function calling
            break;
        case 2:
            sub(); // function calling
            break;
        case 3:
            mul(); // function calling
            break;
        case 4:
            div(); // function calling
            break;
        case 5:
            area(); // function calling
            break;
        case 6:
            square(); // function calling
            break;
        case 7:
            table(); // function calling
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }

    }


    //sub(); // function calling
    //mul(); // function calling
    //div(); // function calling
    //area(); // function calling
    //square(); // function calling
    //table(); // function calling


    return 0;
}
void add()
{
    int a,b,z;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    z = a+b;
    printf("%d + %d = %d\n",a,b,z);
}
void sub()
{
    int a,b,z;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    z=a-b;
    printf("%d - %d = %d\n",a,b,z);
}
void mul()
{
    int a,b,z;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    z=a*b;
    printf("%d * %d = %d\n",a,b,z);
}
void div()
{
    int a,b,z;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    z=a/b;
    printf("%d / %d = %d\n",a,b,z);
}
void area()
{
    const float PI = 3.1416;
    float radius, area;
    printf("Enter the radius of a circle : ");
    scanf("%f",&radius);
    area = PI * radius;
    printf("area of a circle %.4f * %.2f = %.2f\n",PI,radius,area);
}
void square()
{
    int a,z;
    printf("Enter a number : ");
    scanf("%d",&a);
    z = pow(a,2);
    printf("Square of %d is %d\n",a,z);

}
void table()
{
    int n,i,z;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1; i<=10; i++)
    {
        z = n*i;
        printf("%d * %d = %d\n",n,i,z);

    }
}
