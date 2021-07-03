#include <stdio.h>
#include <algorithm>
#include <cassert>
#include <iostream>

using namespace std;

const int BASE = 7;
const int MAXN = 100000 + 10;

int F[BASE][BASE][BASE], tn, na[MAXN], nb[MAXN], nc[MAXN], nbc[MAXN], L;
string a, b, c;

void preprocess () { // a + x*b = c, F[a][b][c] = x
    for(int a = 0; a < 7; a++)
        for(int b = 0; b < 7; b++)
            for(int c = 0; c < 7; c++)
                for(int x = 0; x < 7; x++)
                    if ((a + x * b) % 7 == c)
                        F[a][b][c] = x;
}

int main () {
    ios_base::sync_with_stdio(false);
    preprocess();
    cin >> tn;
    while (tn--) {
        cin >> a >> b >> L;
        for(int i = 0; i < max((int)a.length(), L) + 1; i++)
            na[i] = nb[i] = nc[i] = nbc[i] = 0;
        int m = 0;


        while (b[b.length() - 1 - m] == '0')
            ++m;


        int la = 0, lb = 0;
        for(int i = (int)a.length() - 1 - m; i >= 0; i--)
            na[la++] = a[i] - '0';
        for(int i = (int)b.length() - 1 - m; i >= 0; i--)
            nb[lb++] = b[i] - '0';


        for(int i = 0; i < L; i++) 
        {
            nbc[i + 1] += nbc[i] / 7;
            nbc[i] %= 7;
            nc[i] = F[nbc[i]][nb[0]][na[i]];

            for(int j = 0; j < min(L - i, lb); j++)
                nbc[i + j] += nc[i] * nb[j];

            nbc[i + 1] += nbc[i] / 7;
            nbc[i] %= 7;
        }
        bool fr = false;
        for(int i = L - 1; i >= 0; i--)
            if (nc[i] > 0 || fr) {
                cout << nc[i];
                fr = true;
            }
        cout << endl;
    }
    return 0;
}