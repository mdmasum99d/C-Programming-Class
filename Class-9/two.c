#include<stdio.h>
#include<string.h>
int main()
{
    char x[100] = "Hello world\0";//string

    printf("%s\n",x);

    int index = 0;
    while(x[index] !='\0')
    {
        printf("%c",x[index]);
        index++;
    }
    return 0;
}
