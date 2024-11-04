#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);

    for(int i=0; i<n; i++) cin >> a[i];

    sort(a.begin(), a.end());
    int count=1;
    for(int p: a) {
        if(p>=count) count++;
    } cout << count-1 << endl;

    return 0;
}
