#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,n;
    cin >> s >> n;

    pair<int,int> a[1000];
    int count=0;

    for(int i=0; i<n; i++){
        cin >> a[i].first >> a[i].second;
    }

    sort(a,a+n);

    for(int i=0; i<n; i++){
        if(s<=a[i].first){
            count++;
            break;
        } else{
            s += a[i].second;
        }
    }

    if(count > 0) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}