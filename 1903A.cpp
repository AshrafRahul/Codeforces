#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        vector<int> sorted_a = a;
        sort(sorted_a.begin(), sorted_a.end());

        if(k>=2) cout << "YES" << endl;
        else {
            if(sorted_a==a) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

    return 0;
}
