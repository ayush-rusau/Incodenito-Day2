#include <bits/stdc++.h>
using namespace std;

bool find(int *a, int size, int x) {
    if(size == 0) return false;

    if(a[0] == x) return true;

    return find(a+1, size-1, x) ;
}

int main() {
    int n; cin >> n;
    int *a= new int[n];
    for(int i = 0;i<n;i++) cin >> a[i] ;
    int x; cin >> x;
    bool ans = find(a, n, x);
    if(ans) cout << "Element is present" << endl;
    else cout << "Not present" << endl;
    delete [] a;
    return 0;
}