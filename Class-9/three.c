#include<stdio.h>
int main()
{
    char x[10]={'H','E','L','L','O','\0'};

    printf("%s\n",x);

    int index=0;
    while(x[index] != '\0')
    {
        printf("%c",x[index]);
        index++;
    }
    return 0;
}
