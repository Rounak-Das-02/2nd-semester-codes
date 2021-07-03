#include <stdio.h>
#include <stdlib.h>

int main(){

    char str[20];
    scanf("1-1800-%s" , str);

    printf("%s",str);
    printf("1-1800-");

    for(int i = 0 ; i < strlen(str); i++)
    {
        if(i%3==0)
            printf("-");
        
        int n = (int)(((int)str[i])%64);
        if(n>0 && n<=3)
            printf("2");
        else if(n>=4 && n<=6)
            printf("3");
        else if(n>=7 && n<=9)
            printf("4");
        else if(n>=10 && n<=12)
            printf("5");
        else if(n>=13 && n<=15)
            printf("6");
        else if(n>=16 && n<=19)
            printf("7");
        else if(n>=20 && n<=22)
            printf("8");
        else
            printf("9");
    }
    return 0;
}