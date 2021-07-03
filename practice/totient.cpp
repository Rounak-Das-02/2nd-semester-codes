#include <bits/stdc++.h>

using namespace std;

long long totient(long long n)
{
    long long result = n;

    for(int i = 2 ; i*i <= n ; i++)
    {
        if(n%i == 0)
        {   
            while(n%i == 0)
            {
                n = n / i;
            }
            result = result  - result / i;
        }
    }
    
    if(n > 2)
        result = result - result/n;

    return result;
}


int main()
{

    long long n ;
    cin >> n;
    cout << totient(n) << endl;
    return 0;
}