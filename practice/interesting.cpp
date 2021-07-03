#include <bits/stdc++.h>

using namespace std;

int main(){

    int T; 
    cin >> T;

    while(T--)
    {
        long k;
        cin >> k ;
        long long sum = 0;

        for(long i = 1 ; i <= 2*k ; i++)
        {
            sum = sum + __gcd(k+i*i , k + (i+1)*(i+1));
        }

        
        cout << sum << endl;

    }
    return 0;
}