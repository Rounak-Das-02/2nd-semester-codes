#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#define fast_cin()                    \
ios_base::sync_with_stdio(false); \
cin.tie(NULL);                    \
cout.tie(NULL)
#include <bits/stdc++.h>
using namespace std;

// 7-ary system

const int base = 7;
int digitInBase[base][base][base];

void preprocessing()
{ 
    for(int carry = 0 ; carry < 7 ; carry++)
    {
        for(int a = 0 ; a < 7 ; a++)
        {
            for(int b = 0 ; b < 7 ; b++)
            {
                for(int c = 0 ; c < 7 ; c++)
                {
                    if((carry + c*b)% 7 == a)
                    {
                        digitInBase[carry][a][b] = c;
                        break;
                    }
                }
            }
        }
    }
}





void result()
{
    string a , b;
    int L;
    cin >> a >> b >> L;
    int A[max(L , (int)a.size()) + 1];
    int B[max(L , (int)a.size()) + 1];
    int carry[max(L , (int)a.size()) + 1];
    int answer[max(L , (int)a.size()) + 1];
    for(int i = 0 ; i < max(L , (int)a.size()) + 1 ; i++)
    {
        A[i] = 0;
        B[i] = 0;
        carry[i] = 0;
        answer[i] = 0;
    }



    int numberOfZeroes = 0;
    for( ; b[b.length() - 1 - numberOfZeroes] == '0'; )
        numberOfZeroes++;


    int lengthOfA = 0, lengthOfB = 0;

    for(int i = (int)a.length() - 1 - numberOfZeroes ; i >= 0 ; i--)
    {
        A[lengthOfA++] = a[i] - '0';
    }

    for(int i = (int)b.length() - 1 - numberOfZeroes ; i >= 0 ; i--)
    {
        B[lengthOfB++] = b[i] - '0';
    }

    // for(int i = 0 ; i < lengthOfA ; i++)
    // {
    //     cout << A[i];
    // }

    // cout << endl;
    // for(int i = 0 ; i < lengthOfB ; i++)
    // {
    //     cout << B[i];
    // }

    // cout << endl;



    for(int i = 0 ; i < L ; i++)
    {
        carry[i+1] = carry[i+1] + carry[i]/7;
        carry[i] = carry[i] % 7;

        answer[i] = digitInBase[carry[i]][A[i]][B[0]];        

        for(int j = 0 ; (i + j) < L ; j++)
        {
            carry[i+j] = carry[i+j] + answer[i]*B[j];
        }

        carry[i+1] = carry[i+1] + carry[i]/7;
        carry[i] = carry[i] % 7;

    }  


    bool flag = false;
    for(int i = L-1 ; i>= 0 ; i--)
    {
        if(answer[i] > 0 || flag == true)
        {
            cout << answer[i];
            flag = true;
        }
    }


    cout << endl;

}




int main()
{
    int T;
    cin >> T;
    preprocessing();
    while(T--)
    {
        result();
    }

    return 0;
}