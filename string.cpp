#include<bits/stdc++.h>
using namespace std;

string func(string &s, int i = 0)
{
    if(i == s.size())
    return "";
    if(s[i] == 'x')
    return func(s, i+1);
    
    return s[i] + func(s, i+1);
}
int main()
{
    string s;
    cin >> s;
    cout << func(s);
}