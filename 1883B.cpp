#include<bits/stdc++.h>
using namespace std;

bool canFormPalindrome (string s, int k) {
    vector<int> freq(26,0);
    for(char c: s) {
        freq[c - 'a']++;
    }

    int oddCount = 0;
    for(int f: freq) {
        if(f%2 != 0)
            oddCount++;
    }

    int requiredRemoval = max(0, oddCount-1);
    return k>= requiredRemoval && k<=s.length()-1;
}

int main() {
    int t;
    cin >> t;
     while(t--) {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;

        if(canFormPalindrome(s, k)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
     }

    return 0;
}