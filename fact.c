#include <stdio.h>
#include <math.h>


unsigned long long fact( unsigned long long n)
{
    if (n==0)
    return 1;

    return n*fact(n-1);
}



void main()
{
    unsigned long long n;
    scanf("%llu",&n);
    long double sum = 0;

    for (unsigned long i = 1 ; i<=n ;i++)
    {
        sum = sum + (long double)i/fact(i);
    }

    printf("%0.3Lf" , sum);
}