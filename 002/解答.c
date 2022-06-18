#include<stdio.h>

int main()
{
    int a=1,b=1,c,sum=0;
    while (b<4000000)
    {
        if (b%2==0)
        {
            sum+=b;
        }
        c=b;
        b=b+a;
        a=c;
        
    }
    printf("%d",sum);
    return 0;
        
}