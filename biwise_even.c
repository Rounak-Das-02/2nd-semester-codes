#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    if (n<0 || n>10000)
    {
        printf("-1");        
    }
    else
    {
        if((n^1)==(n+1)) //XOR operation by 1 increments n by 1 if it is even.
            printf("Yes\n");
        else
            printf("No\n");
    }

}