#include<stdio.h>

void MulEx(long long int n)
{
    long long int i = 0;
    for ( i = 2; i <= n; i++)
    {
        while (n!=i)
        {
            if (n%i == 0)
            {
                printf("%lld*",i);
                n/=i;
            }
            else
            {
                break;
            }
            
            
        }
        
    }
    printf("%lld\n",n);
}
int main()
{
    long long int n=600851475143;
    MulEx(n);
    return 0;
    
}