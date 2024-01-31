#include<bits/stdc++.h>
using namespace std;

bool canRecorder(string s) {
    sort(s.begin(), s.end());

    for(int i=0; i<s.size(); i++) {
        if(s[i] == s[i+1]) return false;
    } return true;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if(canRecorder(s)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}