#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n), b(n), c(2*n);

    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];

    for(int i=0; i<n; i++) c[i] = b[i];
    for(int i=0; i<n; i++) c[i+n] = a[i];

    for(int i=0; i<2*n; i++) cout << c[i] << " ";
    cout << endl;

    return 0;
}