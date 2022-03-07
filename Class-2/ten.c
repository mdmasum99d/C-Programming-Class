#include<stdio.h>
int main()
{
    const float pi =3.1416;
    float r,area;
    printf("Enter the value of radius : ");
    scanf("%f",&r);
    area = pi*r*r;
    printf("%f\n",area);
}
