#include<stdio.h>
#include <math.h>

int main()
{
    int depth;
    scanf("%d" , &depth);

    double ans = 1.0;

    for(int i = (depth*2 - 1) ; i >= 3 ; i = i - 2)
    {
        ans = 2.0 + (pow(i,2) / ans);
        printf("%f\n" , ans);
    }

    if(depth >= 2)
    {
        ans = (pow(1,2) /ans);
    }
    
    ans = 4.0 / (1.0 + ans);

    printf("%0.10f" , ans);

    return 0;
}