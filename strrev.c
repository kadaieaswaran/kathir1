#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[50];
    char *rev;
    printf("Enter the string :");
    scanf("%s",str);
    rev = strrev(str);
    printf("Reverse string :%s",rev);
    getch();
    return 0;
}
