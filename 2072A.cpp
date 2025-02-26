#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--) {
        int n, k, p;
        cin >> n >> k >> p;

        if (k>n*p || k<-n*p) cout << -1 << endl;
        else cout << (int)ceil(abs((double)k)/(double)p) << endl;
    }


    return 0;
}