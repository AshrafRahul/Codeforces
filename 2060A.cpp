#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        int mxFibonacci = 0;

        for(int a3=-200; a3<=200; a3++) {
            int count=0;
            if (a4==a2+a3) count++;
            if (a5==a3+a4) count++;
            if (a3==a1+a2) count++;
            mxFibonacci = max(mxFibonacci, count);
        }

        cout << mxFibonacci << endl;
    }

    return 0;
}