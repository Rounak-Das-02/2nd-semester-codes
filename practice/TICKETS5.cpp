#include <bits/stdc++.h>

using namespace std;



void result(string s)
{
    if(s.length() % 2!=0)
    {
        cout << "NO\n";
        return;
    }

    char x = s[0] , y = s[1]; 
    for(int i = 0 ; i < s.length() - 2 ; i+=2)
    {
        if((x != s[i + 2]) || (y != s[i+1+2]) || (x == y))
            {
                cout << "NO\n";
                return ;
            }
    }

    cout << "YES\n";
    return;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        string s;
        cin >>s ;

        result(s);
    }
    return 0; //
}