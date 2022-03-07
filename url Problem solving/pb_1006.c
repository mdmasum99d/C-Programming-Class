#include<stdio.h>
int main()
{
    double a,b,c,d,media;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    a = a*2;
    b = b*3;
    c = c*5;
    d = 2+3+5;
    media = (a+b+c)/d;
    printf("MEDIA = %.1lf\n\n",media);
    return 0;
}
