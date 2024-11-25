#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        int n, sum = 0, mx = 0, k, c = 0;
        cin >> n;
        int a[n];
        if(n & 1) cout << "No\n";
        else{
            cout << "Yes\n";
            for(int i = 0; i < n / 2; i++){
                char cr = 'A' + i;
                cout << cr << cr;
            }
            cout << endl;
        }
    }
    return 0;
}