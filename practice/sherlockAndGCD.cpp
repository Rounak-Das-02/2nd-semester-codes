#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n , m;
    cin >> n >> m;

    vector<int> ar(m+1 , 0);

    for(int i = 2; i <=sqrt(m) ; i++)
    {
        for(int j = i*i ; j<=m ; j = j + i)
        {
            if(ar[j]==0)
                ar[j] = 1;
        }
    }

    int count = 0;
    for(int i = (n%2==0?n+1:n) ; i <= m-2 ; i++)
    {
        if(ar[i] == 0 && ar[i+2] == 0)
        {
            count++;
        }
    }
    cout << count << endl;


    return 0;
}