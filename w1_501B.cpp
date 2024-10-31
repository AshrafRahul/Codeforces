#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    map<string, string> mp1, mp2;
    for(int i=0; i<t; i++) {
        string s1, s2;
        cin >> s1 >> s2;

        string first = s1;
        if(mp1.count(s1)) {
            if(mp1.count(s1)) first = mp1[s1];
        }

        mp2[first] = s2;
        mp1[s2] = first;
        mp1.erase(s1);
    }

    cout << mp2.size() << endl;
    for(auto p: mp2) cout << p.first << " " << p.second << endl;

    return 0;
}
