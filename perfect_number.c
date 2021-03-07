#include <stdio.h>

void main()
{
    unsigned long long n;
    scanf("%llu",&n);

    unsigned long long sum = 0;

    for(unsigned long long i = 1;i<n;i++)
    {
        if(n%i==0)
            sum = sum+i;
    }
    if(sum == n)
    printf("1");
    else
    printf("0");

}