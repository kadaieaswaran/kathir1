#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    char *rev;
    printf("Enter the string :");
    scanf("%s",str);
    rev = strrev(str);
    printf("Reverse string :%s",rev);
    return 0;
}
