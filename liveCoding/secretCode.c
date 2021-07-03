#include <stdio.h>
#include <string.h>
#include <math.h>
typedef unsigned long long ll;



int decimal(ll n)
{

    int sum = 0 , d = 0 , c = 0;
    while(n!=0)
    {
        d = n%10;
        sum = sum + pow(2,c++)*d;
        n /= 10;
    }

    return sum;
}

int main()
{
    ll n;
    scanf("%llu" , &n);
    char str[n];
    for(ll i = 1 ; i <= n ; i++)
    {
        char ch[7];
        scanf("%s" , ch);
        ll num = 0;
        ll c = 0;

        for(int j = strlen(ch) - 1 ; j >= 0; j--)
        {
            num =  num + pow(10 , c++) * ((ch[j]=='*')?1:0);
        }

        printf("%c" , decimal(num));

    }

    return 0;
}