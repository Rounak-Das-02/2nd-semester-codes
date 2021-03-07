#include<stdio.h>

//Your program will be evaluated by this main method and several test cases.
int main()
{
    int N;
    scanf("%d",&N);
    int flag = 1;
    
    while(N!=0)
    {
        int d = N%10;
        if(d!=0 && d!=1)
        {            
            flag = 0;
            break;
        }
        N/=10;
    }
    printf("%d",flag);
    
}