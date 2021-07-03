#include <bits/stdc++.h>
using namespace std;


void calculate(long long n)
{
    for(int i = 2 ; i*i <= n ; i++)
    {
        if(n%i == 0){
            while(n%i == 0){
            cout << i << endl;
            n = n / i;
            }
        }
    }


    if(n > 2)
        cout << n << codendl;
}



int main()
{
    long long n;
    cin >> n;
    
    calculate(n);

    cerr << "Time elapsed : " << (float)clock() / CLOCKS_PER_SEC << endl;
    return 0;
}