#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;

    cin >> t;

    while(t--){
        int d, x, y, z;

        cin >> d >> x >> y >> z;

        cout << ((int)max(x*7, (d)*y + (7-d)*z)) << "\n";
    }
    return 0;
}