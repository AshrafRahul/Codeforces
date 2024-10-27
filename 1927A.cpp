#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int num1=0, num2=0;
        for(int i=0; i<n; i++) {
            if(s[i]=='B') {
                num1=i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--) {
            if(s[i]=='B') {
                num2=i;
                break;
            }
        }
        cout << num2-num1+1 << endl;
    }

    return 0;
}
