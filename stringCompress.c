#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char ch;
#define FOR(x , y) for(int i = x; i <=y ; i++)
#define length(s) strlen(s)
typedef int i;


int main()
{
    ch s[1000];
    scanf("%s" , s);
    i count = 0 ;

    FOR(1 , length(s)-1)
    {
        if(s[i] != s[i-1])
        {
            printf("%c" , s[i-1]);
            if(count == 0)
                continue;
            printf("%d" , count+1);
            count = 0;
        }
        else
        {
            count++;
        }
    }
    printf("%c" , s[length(s) - 1]);
    if(count !=0)
    printf("%d" , count+1);
    return 0;
}