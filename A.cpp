#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;  cin >> t;
    while (t--)  {
        long long n;  cin >> n;
        vector<long long> a(n+1);
        a[0] = 0;
        long long x;    cin >> x;
        long long m=0;
        for (long long i = 1; i <= n; i++) {
            cin >> a[i];
            if (a[i] - a[i - 1] > m) m =  a[i] - a[i -1];
        }
        m = max(m, 2*(x - a[n]));
        cout << m << endl;
    }

    return 0;
}