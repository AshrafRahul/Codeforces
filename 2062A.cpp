#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n=s.length();
        int ones=0;
        for (char c : s) {
            if (c == '1') ones++;
        }
        cout << ones << endl;
    }

    return 0;
}