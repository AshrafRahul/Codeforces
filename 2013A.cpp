#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long int n;
        cin >> n;
        long long int x, y;
        cin >> x >> y;

        if(n==0) {
            cout << 0 << endl;
            continue;
        }

        if(x>=y) cout << (n+y-1)/y << endl;
        else cout << (n+x-1)/x << endl;
    }

    return 0;
}
