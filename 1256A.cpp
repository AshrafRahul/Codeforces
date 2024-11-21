#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        long long a, b, n, s;
        cin >> a >> b >> n >> s;

        long long x=min(a, s/n);
        long long remS = s-x*n;
        if(remS<=b) cout << "YES" << '\n';
        else cout << "No" << '\n';
    }

    return 0;
}
