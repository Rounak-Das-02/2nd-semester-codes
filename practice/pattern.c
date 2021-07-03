#include <stdio.h>

int main()
{
    int n;
    scanf("%d" , &n);
    int ar[2*n - 1][2*n - 1];
    for(int i = 0;i<n;i++)
    {
        int flag = 0;
        int number = n-1;
        for(int j = 0 ;  j < n ; j++)
        {
            if(i == 0 || j == 0)
            {
                ar[i][j] = n;
                ar[i][2*n - 2 - j] = n;
                continue;
            }

            if(j==i)
            {
                flag = 1;
            }

            if(flag == 1)
            {
                ar[i][j] = number;
                ar[i][2*n - 2 - j] = number;
                continue;
            }

            ar[i][j] = number;
            ar[i][2*n - 2 - j] = number;
            number--;
        }
        // printf("\n");
    }

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < 2*n - 1 ; j++)
        {
            printf("%d " , ar[i][j]);
        }
        printf("\n");
    }


    for(int i = n - 2 ; i >= 0 ; i--)
    {
        for(int j = 0 ; j < 2*n - 1 ; j++)
        {
            printf("%d " , ar[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}