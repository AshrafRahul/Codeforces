#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> note(n);
        for(int i=0; i<n; i++) cin >> note[i];

        bool checl = true;
        for(int i=1; i<n; i++) {
            int interval = abs(note[i] - note[i-1]);
            if(interval!=5 && interval!=7) {
                checl = false;
                break;
            }
        }
        if(checl) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
