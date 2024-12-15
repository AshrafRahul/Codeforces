#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        string a;
        cin >> a;

        string b;
        for(char c: a) {
            if (c == 'p') b += 'q';
            else if (c == 'q') b += 'p';
            else if (c == 'P') b += 'Q';
            else if (c == 'Q') b += 'P';
            else if (c == 'w' || c == 'W') b += c;
        }
        
        reverse(b.begin(), b.end());
        cout << b << endl;
    }

    return 0;
}