#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string t;
    cin >> t;

    string s;

    int count=1;

    for(int i=0; i<n; i+=count) {
        s += t[i];
        count++;
    } cout << s << endl;

    return 0;
}