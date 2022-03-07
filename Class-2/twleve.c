#include<stdio.h>
#define p printf
#define s scanf
int main ()
{
    float pi = 3.1416,r,area;
    p("Enter the value of radius : ");
    s("%f",&r);
    area = pi*r*r;
    p("%f",area);
}
