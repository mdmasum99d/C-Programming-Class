#include<stdio.h>
int main()
{
    int employees_no,hours;
    float amount,total;
    scanf("%d",&employees_no);
    scanf("%d",&hours);
    scanf("%f",&amount);
    printf("NUMBER = %d\n",employees_no);
    total = hours*amount;
    printf("SALARY = U$ %.2f\n",total);
    return 0;
}
