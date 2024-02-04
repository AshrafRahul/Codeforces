#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int heights[1001];
    for(int i=0; i<n; i++) cin >> heights[i];

    int minDiff = INT_MAX;
    int soldier1, soldier2;

    for(int i=0; i<n; i++) {
        int diff = abs(heights[i] - heights[(i+1)%n]);
        if(diff<minDiff) {
            minDiff = diff;
            soldier1 = i+1;
            soldier2 = (i+1)%n + 1;
        } 
    } cout << soldier1 << " " << soldier2 << endl;

    return 0;
}