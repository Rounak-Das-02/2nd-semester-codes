#include <bits/stdc++.h>

using namespace std;
int main(){

    int t;
    cin >> t;

    while (t--){
        int g, c;
        cin >> g >> c;

        cout << ((int)(c*c/ (2*g))) << "\n";
    }
    return 0;
}