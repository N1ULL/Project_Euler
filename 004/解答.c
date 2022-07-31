#include<stdio.h>

int main()
{
    int num,front,back,a1,a2,a3,b,c=0;
    for (int i = 991; i < 1000; i++)
    {
        for (int j = 101; j < 1000; j++)
        {
            num = i * j;

            front = num/1000;
            back = num % 1000;
            
            a1 = back % 10;
            a2 = back % 100 / 10;
            a3 = back /100;
            
            b = a1*100+a2*10+a3;

            if (front == b)
            {
                if (num > c && num > 900000)
                {
                    c = num;
                    printf("%d*%d=%d\n",i,j,num);
                }
            }
            
        }
        
    }
    return 0;
}
