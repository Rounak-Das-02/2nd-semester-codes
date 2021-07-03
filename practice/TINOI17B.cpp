#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N , S;
    cin >> N >> S;

    unsigned long long strength[N + 1];
    strength[0] = S;

    for(int i = 1 ; i <= N ;i++)
    {
        int previousStrength = strength[i-1];
        int sum = 0;
        while(previousStrength!=0)
        {
            sum += previousStrength%10;
            previousStrength /= 10;
        }
        strength[i] = strength[i-1] + sum*sum*sum; 
    }


    unsigned long long E[N+1];

    for(int i = 1; i<=N; i++)
    {
        cin >> E[i];
    }


    unsigned long long ifFight = 0 , ifTrain = 0;
    unsigned long long maximumXV[N+1][N+1] = {}; //Initialise everything to 0;
    unsigned long long maximum = 0;

    for(int n = 1 ; n <= N ;n++)
    {
        for(int t = 1 ; t <= n ;t++)
        {
            ifFight = maximumXV[n-1][t-1] + strength[n-t]*E[n];
            ifTrain = maximumXV[n-1][t];
            maximumXV[n][t] = max(ifFight , ifTrain);
        }
    }

    for(int i = 1 ; i <=N ; i++)
    {
        maximum = max(maximumXV[N][i] , maximum);
    }

    cout << maximum <<"\n";   


    return 0;
}