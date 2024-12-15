#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--) {
        ll m, a, b, c;
        cin >> m >> a >> b >> c;

        ll mxR1 = min(m, a);
        ll mxR2 = min(m, b);
        ll remS = 2*m-mxR1-mxR2;
        ll mnk = mxR1+mxR2+min(remS, c);
        cout << mnk << '\n';
    }

    return 0;
}