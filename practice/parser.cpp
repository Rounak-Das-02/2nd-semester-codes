#include <bits/stdc++.h>

#define IF(x , y) if(x != '<' && x!='{' && x != '(' && x == y)

#define IfFirst(x) if(x == '<' || x == '{' || x == '[' || x == '(')
#define IfFirstnegative(x) if(x != '<' || x != '{' || x != '[' || x != '(')

#define IfSecond(x) if(x == '>' || x == '}' || x == ']' || x == ')')

using namespace std;

int main()
{
    string str;
    cin >> str;

    vector <char> ar;
    // char ar[str.size()];
    int count = 0;
    int index = -1;


    // map <char , char> map = {{'{','}'},
    //                          {'[',']'} ,
    //                          {'(',')'} ,
    //                          {'<','>'} };


    for(int i = 0 ; i < str.size() ;i++)
    {
        char x = str[i];
        
        IfFirst(x)
        {
            ar.push_back(x);
            index++;
            continue;          
        }
        

            if(index < 0)
            {
                cout << "Impossible";
                return 0;
            }                     

            if((ar[index] == '{' && x == '}') || (ar[index] == '[' && x == ']') || (ar[index] == '(' && x == ')') || (ar[index] == '<' && x == '>'))
                count--;
                
            count++;
            ar.pop_back();
            index--;

    }

    if(ar.size() == 0)
        cout << count;
    else
        cout << "Impossible";


    return 0;
}