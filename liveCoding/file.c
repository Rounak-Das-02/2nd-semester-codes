#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


typedef char ch;
#define FOR(x , y) for(int i = x ; i <=y ;i++)
#define FORJ(x , y) for(int j = x ; j <=y ;j++)
#define length(s) strlen(s)
#define integer int

int main()
{
    int numberOfFriends = 1000;
    char myFriends[numberOfFriends][30];

    ch filename[30];
    scanf("%s" , filename);
    FILE* file_no_plag = fopen(filename , "r");

    if(file_no_plag == NULL)
    {
        printf("-1");
        return -1;
    }

    ch str[30];
    integer index = 0;
    while(fscanf(file_no_plag, "%s" , str) != EOF)
    {
        if(index %2 != 0) //Ensures only names are taken and not the numbers
            {
                index++;
                continue;
            }

        FOR(0 , length(str) - 1 ){ 
            myFriends[index/2][i] = str[i]; //Store only the names 
        }
        index++;
    }



    //Do a bubble sorting of myFriends

    FOR(0 , index/2 - 1 - 1)
    {
        FORJ(0 , index/2 - 1 - 1 - i)
        {
            if(strcmp(myFriends[j] , myFriends[j+1]) > 0)
            {
                char ch[30]; //If they are in descending order , swap them to make it ascending
                strcpy(ch, myFriends[j]);
                strcpy(myFriends[j], myFriends[j+1]);
                strcpy(myFriends[j+1] , ch);
            }
        }

    }

    FOR(0 , index/2 - 1) //print the names in lexicographical order
    {
        printf("%s\n" , myFriends[i]);
    }

    return 0;
}