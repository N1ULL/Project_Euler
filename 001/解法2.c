#include<stdio.h>

int main()
{
    int num1,num2,num3;
    num1=(999+3)*999/3/2;
    num2=(995+5)*995/5/2;
    num3=(990+15)*990/15/2;
    num3=num1+num2-num3;
    printf("%d",num3);
}