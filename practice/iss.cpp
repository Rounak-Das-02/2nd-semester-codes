#include <bits/stdc++.h>
using namespace std;


const int K = 4e6 + 6;
int sumOfGCD[K];


void preprocess(){

    int *totientPhi = new int[K];

    totientPhi[0] = 0;


    for(int i = 1 ;i < K ; i++)
    {
        totientPhi[i] = i;
        sumOfGCD[i] = 0;
    }

    for(int i = 2 ; i < K ; i++)
    {
        if(totientPhi[i] == i)
        {
            for(int j = i ; j <K ; j = j+i)
            {
                totientPhi[j] -= totientPhi[j] / i;
            }
        }
    }

    for(int i = 1 ; i < K ;i++)
    {
        for(int j = i ; j < K ; j= j + i)
        {
            sumOfGCD[j] += i * totientPhi[j/i];
        }
    }
}


int main()
{
    preprocess();
    int T;
    cin >> T;
    while(T--)
    {
        int k;
        cin >> k;
        int A = sumOfGCD[4*k + 1];
        cout << (A -1 - (int)(A - 4*k - 1)/2) << "\n";
    }

    cerr << (float)clock() / CLOCKS_PER_SEC;
    return 0;
}


//ALWAYS USE SCANF AND PRINTF 