#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector <int> ar(n+1, 0);

        for(int  i=0; i < n ; i++){
            cin >> ar[i];
        }

        vector <int> factors;
        for (int i=0; i < n ; i++){
            int x = ar[i];
            int powersof2 = 0;
            while(x!=0){
                int d = x%2;
                if (d)
                    factors.push_back(d*pow(2, powersof2));
                powersof2++;
                x /= 2;
            }
        }

        // for ( int i = 0; i < factors.size(); i++ )
        // {
        //     cout << factors[i] << endl;
        // }
        

        sort(factors.begin(), factors.end());
        vector <int> newFact;
        newFact = factors;
        vector <int>:: iterator ip; 
        ip = unique(factors.begin(), factors.end());

        factors.resize(distance(factors.begin(), ip));

        int sum = 0;
        for (int i = 0 ; i < factors.size() ; i++){
            double z = (count(newFact.begin(), newFact.end(), factors[i]));
            sum += (int) ceil(z/k) ;
        }
        cout << (int)sum << "\n";
    }
    return 0;
}