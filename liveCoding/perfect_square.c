#include <stdio.h>
#include <math.h>

void main()
{
    int n;
    scanf("%d" ,&n);

    if((sqrt(n) - (int)(sqrt(n)) == 0.0)) //checks whether the the difference between the decimal and integer part of it's square root is absolute 0 or not
    {
        printf("1");
    }
    else
    printf("0");
}