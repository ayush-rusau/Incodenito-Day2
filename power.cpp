#include <bits/stdc++.h>
using namespace std;

int powerOptimal(int x, int n) {
    if(n == 0) return 1;

    int smallAns = powerOptimal(x, n/2);

    int ans;
    if(n%2 == 0) ans = smallAns*smallAns;
    else ans = x*smallAns*smallAns;
    return ans;
}

int power(int x, int n) {
    if(n == 0) return 1;

    int smallAns = power(x, n-1);
    int ans = x * smallAns;
    return ans ;
}

int main() {
    int x, n;
    cin >> x >> n;
    cout << powerOptimal(x, n) ;
    return 0;
}