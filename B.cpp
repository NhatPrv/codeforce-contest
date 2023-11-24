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
        vector<long long> a(n+2);
        long long count = 0;
        long long M = 1, m = 1;
        for (long long i = 1; i <= n; i++)  {
            cin >> a[i];
        }
        a[n+1] = 0;
        for (long long i = 1; i <= n+1; i++) {
            if (a[i] == 0) {
                if (M >= m) {
                    count += M-m;
                }
                else count += M;
                    m = 0;
                    M = 1;
                while (i <= n && a[i+1] == 0) i++;
            }
            else {
                M = max(a[i], M);
                m = min(a[i], m);
            }
        }
        cout << count << "\n";
    }

    return 0;
}