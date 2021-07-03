#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#define fast_cin()                    \
ios_base::sync_with_stdio(false); \
cin.tie(NULL);                    \
cout.tie(NULL)
#include <bits/stdc++.h>
using namespace std;

const int M = 5e5 + 5;
vector <vector<int>> ar(M);


void preprocess(){
    for(int i = 1 ; i < M ; i++){
        for(int j = i ; j < M ; j=j+i){
            ar[j].push_back(i);
        }
    }
}


int main()
{
    preprocess();

    int T;
    cin >> T;
    while(T--){
        int m , n;
        cin >> n >> m;
        int res = 0;
        for(int b = 2 ; b <= min(m,n) ;b++)
        {
            int x = m - (m%b);
            if(x>0)
                res = res + lower_bound(ar[x].begin() , ar[x].end() , b) - ar[x].begin();
            else
                res = res + b-1;
        }
        for(int i = m+1 ; i <= n ;i++)
        {
            res = res + i - 1;
        }

        cout << res << endl;
    }
    return 0 ;
}