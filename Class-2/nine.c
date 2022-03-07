#include<stdio.h>
int main()
{
    float pi = 3.1416,r,area;
    printf("Enter the area of radius : ");
    scanf("%f",&r);
        area = pi *r*r;
    printf("%f\n",area);
    printf("%.5f\n",area);
    printf("%.4f\n",area);
    printf("%.3f\n",area);
    printf("%.2f\n",area);
    printf("%.1f\n",area);
    printf("%.0f\n",area);
}
