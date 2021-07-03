// This method is also known as extended Euclidean 

#include <bits/stdc++.h>

using namespace std;

int pulverizer(int x , int y , int* a , int* b)
{
    if(y == 0)
    {
        *a = 1;
        *b = 0;
        return x;
    }
    int a1 , b1;
    int ans =  pulverizer(y , x%y , &a1 , &b1);
    *b = a1 - b1 * (x/y); //Donald Knuth floored division equation => x%y = x - floor(x/y)*y
    *a = b1;
    return ans;
}


int main()
{
    int x = 259 , y = 70;
    int a  = 1, b = 0;

    int res = pulverizer(max(x , y) , min(x , y) , &a , &b);  //ax + by = gcd(x , y)

    cout << res << endl;
    cout << a << " " << b ;

    return 0;
}

