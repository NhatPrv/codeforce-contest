#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;    cin >> n;
    long long m = n, m2 = n;
    vector<long long> a(n+1);
    for (long long i = 1; i <= n; i++) {
        cin >> a[i];
        m = max(m, a[i] + i);
        m2 = max(m2, a[i] + n - i);
    }
    cout << min(m, m2);
    return 0;
}