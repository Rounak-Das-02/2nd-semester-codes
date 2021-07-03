
#include<bits/stdc++.h>
using namespace std;


void update(vector <int> &vec)
{
    vec.push_back(10);
}
int main()
{
    vector <int> vec;
    vec.push_back(5);
    vec.push_back(6);
    update(vec);

    for(int i = 0 ; i < vec.size() ; i++)
        cout << vec[i] << endl;

    return 0;
} 