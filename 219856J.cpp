#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> freq(26, 0);

    for(char c: s) {
        freq[c-'a']++;
    }

    for(int i=0; i<26; i++) {
        if(freq[i] > 0) cout << char('a'+i) << " : " << freq[i] << endl;
    }

    return 0;
}