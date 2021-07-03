#include <bits/stdc++.h>

using namespace std;

map<string, int> database;



void answer(string s)
{
    if(database.find(s) == database.end())
    {
        cout << "OK\n";
        database[s] = 0;
        return;
    }

    database[s]++;
    cout << s << database[s]<<"\n";
    return;    

}


int main(){
    
    int T;
    cin >> T;
    string s;
    cin >> s;
    cout << "OK\n";
    database[s] = 0;
    T-=1;
    while(T--){

        string s;
        cin >> s;

        answer(s);

    }

    return 0;
}