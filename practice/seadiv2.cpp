#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#define fast_cin()                    \
ios_base::sync_with_stdio(false); \
cin.tie(NULL);                    \
cout.tie(NULL)
#include <bits/stdc++.h>
using namespace std;


int multiplicativeInverseModulo7[7];

void preprocess(){
    multiplicativeInverseModulo7[0] = 0;
    multiplicativeInverseModulo7[1] = 1;
    multiplicativeInverseModulo7[2] = 4;
    multiplicativeInverseModulo7[3] = 5;
    multiplicativeInverseModulo7[4]=  2;
    multiplicativeInverseModulo7[5] = 3;
    multiplicativeInverseModulo7[6] = 6;
}


vector <int> subtract(vector <int> x , vector <int> y)
{
    //x is larger and y is smaller

    vector <int> result;
    for(int i = 0 ; i < x.size() ; i++)
    {
        if(x[i] < y[i])
        {
            result.push_back(7+x[i] - y[i]);
            x[i+1]--;
        }
        else
        {
            result.push_back(x[i] - y[i]);
        }

    }

    return result;
}






void print_result(vector <int> ans)
{
    bool flag = false;
    
    for(int i = ans.size() - 1 ; i >= 0 ; i--)
    {
        if(ans[i] > 0 || flag == true)
        {
        cout << ans[i];
        flag = true;
        }
    }
    cout <<endl;
}



void result(string a , string b , int L)
{
    vector <int> A(a.size(), 0);
    vector <int> B (a.size(), 0);

    for(int i = 0 ; i < a.size() ; i++)
    {
        A[i] = (a[a.size() - 1 - i] - '0');
    }

    for(int i = 0 ; i < b.size() ; i++)
    {
        B[i] = (b[b.size() - 1 - i] - '0');
    }

    
    vector <int> answer;
    answer.push_back(0);
    int carry = 0;
    for(int i = 0 ; i < L ; i++)
    {
        answer.push_back((A[i]*multiplicativeInverseModulo7[B[i]] + carry) % 7);
        // carry = (A[i]*multiplicativeInverseModulo7[B[i]] + carry) / 7;

        vector <int> temp;

        for(int j = 0 ; j < (L - i) ; j++)
        {
            temp.push_back((answer[i]*B[j] + carry) % 7);
            // B[j] = (answer[i]*B[j] + carry) % 7;
            carry = (answer[i]*B[j] + carry) / 7;
        }
        if(carry!=0)
            temp.push_back(carry);

        A = subtract(A ,temp);
        print_result(temp);
        print_result(A);
        A.erase(A.begin());
        
    }


    print_result(answer);

}   

int main()
{
    int T;
    cin >> T;
    preprocess();
    while(T--)
    {
        string a , b;
        cin >> a >> b;
        int L;
        cin >> L;
        result(a , b , L);
    }
    return 0;
}