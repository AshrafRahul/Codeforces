#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int count=0;
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(a[i]+1 == a[j]) {
                count++;
                break;
            }
        }
    } cout << count << endl;

    return 0;
}