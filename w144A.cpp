#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    map<pair<string, string>, bool> m;
    for(int i=0; i<t; i++) {
        string s, st;
        cin >> s  >> st;
        m[{s, st}] = true;
    }

    cout << m.size() << endl;

    return 0;
}
