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
        s.pop_back();
        s.pop_back();
        cout << s << "i" << '\n';
    }

    return 0;
}