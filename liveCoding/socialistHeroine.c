#include <stdio.h>
#include <math.h>

typedef unsigned long long ll;
int main()
{
    ll n , k , w;

    scanf("%llu" , &k);
    scanf("%llu" , &n);
    scanf("%llu" , &w);


    ll sum = (ll)(w/2.0) * (2*k + (w-1)*k);

    ll result = (sum<n)?0:(sum-n);

    printf("%llu" , result);

    return 0;

}