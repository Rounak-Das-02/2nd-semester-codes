#include <stdio.h>
#include <math.h>

void main()
{
    unsigned long long n;
    scanf("%llu", &n);

    unsigned long long c = 0;
    unsigned long long sum = 0;
    if (n<0 || n>524287)
    {
        printf("-1");
    }
    else
    {
        while(n!=0)
        {
            int d = n%2;
            sum = sum + d*(unsigned long long)(pow(10,c));
            c++;
            n = n/2;
        }
        printf("%llu\n" , sum);
    }
    


    
}