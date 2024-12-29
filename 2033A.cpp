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

        if(n%2==0) cout << "Sakurako" << '\n';
        else cout << "Kosuke" << '\n';
    }

    return 0;
}