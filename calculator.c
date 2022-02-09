/*8- C program to create calculator using switch case and functions*/

#include <stdio.h>
int main()
{
    //%i is same as %d
    char cal;
    int a,b;
    printf("Enter first numbers: ");
    scanf("%i",&a);
    getchar();
    printf("Enter operator ( + - * / ): ");
    scanf("%c",&cal);
    printf("\nEnter second number: ");
    scanf("%i",&b);
    switch (cal)
    {
    case '+': printf("answer is %d\n",a+b); break;
    case '-': printf("answer is %d\n",a-b); break;
    case '*': printf("answer is %d\n",a*b); break;
    case '/': printf("answer is %d\n",a/b); break;
    default : printf("INVALID OPERATOR"); break;
    }
}