#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n+1);
    vector<int> cnt(n+1);
    set<int> elements;

    for(int i=1; i<=n; i++) {
        cin >> a[i];
    }

    for(int i=n; i>=1; i--) {
        elements.insert(a[i]);
        cnt[i] = elements.size();
    }

    for(int i=0; i<m; i++) {
        int k;
        cin >> k;
        cout << cnt[k] << endl;
    }

    return 0;
}
