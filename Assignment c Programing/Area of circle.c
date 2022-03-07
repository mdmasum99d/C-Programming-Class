#include <stdio.h>
#include <math.h>
#define PI 3.1416
void area1();
double area2(double r, double area_2);
void area3(double r3, double area_3);
double area4();

int main()
{
    printf("Area of Circle:\n---------------\n");
	area1();
	double r2, r3, area_2, area_3;
	printf("\nEenter the radius: ");
	scanf("%lf", &r2);
	double c = area2(r2, area_2);
	printf("area_2 = %lf\n", c);
	area3(r3, area_3);
	double h = area4();
	printf("area_4 = %lf\n", h);
	return 0;
}
void area1()
{
	double r1, area_1;
	printf("Enter the radius: ");
	scanf("%lf", &r1);
	area_1 = PI * pow(r1, 2);
	printf("area_1 = %lf\n", area_1);
}
double area2(double r, double area_2)
{
	return PI * pow(r, 2);
}
void area3(double r3, double area_3)
{
	printf("\nEnter the radius: ");
	scanf("%lf", &r3);
	area_3 = PI * pow(r3, 2);
	printf("area_3 = %lf\n", area_3);
}
double area4()
{
	double r4, area_4;
	printf("\nEnter the radius: ");
	scanf("%lf", &r4);
	area_4 = PI * pow(r4, 2);
	return area_4;
}
