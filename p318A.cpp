#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i=0; i<n; i++) cin >> a[i];

    int sum1=0, sum2=0, i=0, j=n-1;
    for(int k=0; i<=j; k++) {
        if(a[i]>a[j]) {
            if(k%2==0) {
                sum1+=a[i];
                i++;
            } else {
                sum2+=a[i];
                i++;
            }
        } else {
            if(k%2==0) {
                sum1+=a[j];
                j--;
            } else {
                sum2+=a[j];
                j--;
            }
        }
    }

    cout << sum1 << " " << sum2 << endl;

    return 0;
}
