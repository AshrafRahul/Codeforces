#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        map<int, int> mp;
        for(int i=0; i<n; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }
        priority_queue<int> pq;
        for(auto i: mp) pq.push(i.second);

        while(pq.size()>=2) {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            a--;
            b--;
            if(a) pq.push(a);
            if(b) pq.push(b);
        }
        if(pq.empty()) cout << 0 << endl;
        else cout << pq.top() << endl;
    }

    return 0;
}
