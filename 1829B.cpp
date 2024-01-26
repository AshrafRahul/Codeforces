#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, a, temp=0, maxi=0;
        cin >> n;

        for(int i=0; i<n; i++){
            cin >> a;
            if(a==1) temp=0;
            else {
                temp++;
                maxi = max(temp, maxi);
            }
        } cout << maxi << endl;
    }

    return 0;
}