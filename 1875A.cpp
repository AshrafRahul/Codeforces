#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long int a,b,n;
        cin >> a >> b >> n;
        long long int arr[n];
        long long int sum = b;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            if(arr[i]+1<=a) {
                sum += arr[i];
            } else {
                sum += a-1;
            }
        } cout << sum << endl;
    }

    return 0;
}