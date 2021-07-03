#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void main()
{
    char s[100000];
    scanf("%[^\n]%*c" , s);

    int flag = 1;

    for(int i=0;i<strlen(s);i++)
    {
        if(islower(s[i]))
        {
            flag = 0;   
            break;
        }
    }
        


    if(flag ==1)
        printf("Yes");
    else
        printf("No");
}