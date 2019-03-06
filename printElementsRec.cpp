#include <bits/stdc++.h>
using namespace std;

void print(int *a, int n) {
    if(n == 0) return ;
    cout << a[0] << " ";
    print(a+1, n-1);
}

int main() {
    int n;
     cin >> n;
     int *a = new int[n];
     for(int i = 0;i<n;i++) cin >> a[i];
     print(a, n) ;
     delete [] a;
     
    return 0;
}