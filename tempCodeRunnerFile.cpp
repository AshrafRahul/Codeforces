#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (n == 1) {
            cout << a[0] + 1 << endl;
            continue;
        }

        vector<int> dp(n, 0);
        dp[0] = a[0] + 1;
        dp[1] = max(a[0] + 1, a[1] + 1);

        for (int i = 2; i < n; ++i) {
            dp[i] = max(dp[i-1], a[i] + dp[i-2] + 1);
        }

        cout << dp[n-1] << endl;
    }
    return 0;
}
