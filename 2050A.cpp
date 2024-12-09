#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<string> wrd(n);
        for(int i=0; i<n; i++) cin >> wrd[i];

        int crntLngth=0, cnt=0;
        for (int i=0; i<n; i++) {
            if (crntLngth+wrd[i].size()<=m) {
                crntLngth += wrd[i].size();
                cnt++;
            } else break;
        } cout << cnt << endl;
    }

    return 0;
}