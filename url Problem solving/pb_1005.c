#include<stdio.h>
int main()
{
    double A,B,C,MEDIA;
    scanf("%lf",&A);
    scanf("%lf",&B);
    A = A*3.5;
    B = B*7.5;
    C = 3.5+7.5;
    MEDIA = (A+B)/C;
    printf("MEDIA = %.5lf",MEDIA);
    return 0;

}
