//Write a c program to check an alphabet whether it is vowel or consonant
#include<stdio.h>
int main()
{
    char k;
    while(1)
    {
        printf("Enter an alphabet: ");
        scanf(" %c",&k);
        if((k>='A' && k<='Z') ||(k>='a' && k<='z'))
        {
            switch(k)
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                printf("%c is Vowel.\n",k);
                break;
                default:
                    printf("%c is a consonant.\n",k);
            }
        }
        else{
            printf("Invalid character.\n");
        }
    }
    return 0;
}
