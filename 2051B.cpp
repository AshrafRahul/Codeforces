#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;

        long long dys=0, ttlKm=0, cKm=a+b+c, cycl=n/cKm;
        ttlKm = cycl * cKm;
        dys = cycl * 3;
        n %= cKm;

        if (n>0) {
            if (n <= a) {
                ttlKm += a;
                dys++;
            } else if (n <= a + b) {
                ttlKm += a + b;
                dys += 2;
            } else {
                ttlKm += a + b + c;
                dys += 3;
            }
        }

        cout << dys << '\n';
    }

    return 0;
}