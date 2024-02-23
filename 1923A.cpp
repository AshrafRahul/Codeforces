#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        
        int start = -1;
        for(int i=0; i<n; i++) {
            if(a[i] == 1) {
                start = i;
                break;
            }
        }

        int end = -1;
        for(int i=n-1; i>=0; i--) {
            if(a[i] == 1) {
                end = i;
                break;
            }
        }

        int countZero = 0;
        for(int i=start+1; i<end; i++) {
            if(a[i] == 0) {
                countZero++;
            }
        }

        cout << countZero << endl;
    }

    return 0;
}