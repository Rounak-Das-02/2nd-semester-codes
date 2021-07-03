#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#define fast_cin()                    \
ios_base::sync_with_stdio(false); \
cin.tie(NULL);                    \
cout.tie(NULL)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    fast_cin();
    // vector<int> ar = {3 , 20 , 10 , 6 ,7 ,  7 , 8 , 20};
    // sort(ar.begin() , ar.end() , greater<int>());
    // for(int i = 0 ; i < ar.size() ; i++)
    //     cout << ar[i] << endl;
    // auto last = unique(ar.begin() , ar.end());
    // ar.erase(ar.begin());
    // for(auto i = ar.begin() ; i != ar.end() ; i++)
    // {
    //     if(*i == 20)
    //         {ar.erase(i);i--;}
        
    //     cout << *i << endl;
    // }
    // vector<vector<int>> a;
    // vector<int> data{1 , 2  , 4 , 5};
    // a.push_back(data);
    // data = {10 , 20  , 40, 50};
    // a.push_back(data);
    // a[0].push_back(1);
    // a[0].push_back(2);
    // a[0].push_back(3);
    // a[1].push_back(10);
    // a[1].push_back(11);
    // a[1].push_back(12);
    // for(int i = 0 ; i < a.size();i++)
    // { 
    //     for(int j = 0 ; j <a[i].size();j++)
    //     {
    //         cout << a[i][j]<< " ";
    //     }
    //     cout<<endl;
    // }
    // map<int , int> map;
    // map.insert(make_pair(1 , 2));
    // map.insert(make_pair(2 , 5));
    // map.insert(make_pair(3 , 7));
    // cout << map[3] <<endl;

    int count = 0;

    int N = 5 , M = 10;
    for(int i = 1 ; i < N ;i++)
    {   
        for(int j = i+1 ; j <= N ; j++)
        {
            if((M%j)%i == (M%i)%j){

            cout << i << " " << j << " modulus : " << (M%j)%i  << endl;                
            count++;}
        }
    }
    cout << count;


    return 0;
}