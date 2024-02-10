#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<pair<int, int>, int> arrivals;

    for(int i=0; i<n; i++) {
        int h, m;
        cin >> h >> m;
        arrivals[{h, m}]++;
    }

    int maxCount = 0;
    for(auto& pair : arrivals) {
        maxCount = max(maxCount, pair.second);
    } cout << maxCount << endl;

    return 0;
}