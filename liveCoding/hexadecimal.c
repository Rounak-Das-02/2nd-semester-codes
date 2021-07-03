#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    char s[10000];
    scanf("%9999[^\n]%*c" , s);

    int flag = 1;
    for(int i = 0 ; i< strlen(s) ; i++)
    {
        int n = s[i];
        if (!((n>47 && n<58) || (n>=97 && n<=102)))
        {
            flag = 0;
            break;
        }

    }
    if (flag==1)
    printf("Yes");
    else
    printf("No");


}