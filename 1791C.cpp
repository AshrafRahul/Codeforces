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
        string s;
        cin >> s;

        int l=0, r=n-1, cnt=0;

        while(l<r) {
            if(s[l]=='0' && s[r]=='1' || s[l]=='1' && s[r]=='0') {
                l++;
                r--;
                cnt++;
            } else break;
        } cout << n-(2*cnt) << endl;
    }

    return 0;
}