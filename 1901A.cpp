#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;
        vector<int> v(a);

        for(int i=0; i<a; i++) cin >> v[i];

        int maxi = INT_MIN;
        for(int i=1; i<a; i++) {
            int difference = v[i] - v[i-1];
            maxi = max(difference, maxi);
        }
        maxi = max(maxi, v[0]-0);
        maxi = max(maxi, 2*(b-v[a-1]));

        cout << maxi << endl;
    }

    return 0;
}
