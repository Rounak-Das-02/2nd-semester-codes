#include <stdio.h>
#include <math.h>

void main()
{
    unsigned long long n;

    scanf("%llu" , &n);
    unsigned long long total = 0;

    for(unsigned long long i =1 ;i<=n ;i++)
    {
        unsigned long long c = 0;
        unsigned long long number = 0;

        for(unsigned long long j = 1 ;j<=i;j++)
        {
            number = number + i * (unsigned long long)pow(10,c);
            c++;
        }

    total = total + number;
    
    }

    printf("%llu", total);

}