#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    for(int i=0; i<n; i++) {
        if(a[i] > 0) a[i] = 1;
        else if(a[i] < 0) a[i] = 2;
        else if(a[i] == 0) a[i] = 0;
    }

    for(int i=0; i<n; i++) cout << a[i] << " ";
    cout << endl;

    return 0;
}