#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, flag=0;
        cin >> n;

        string row1, row2;
        cin >> row1;
        cin >> row2;
    
        for(int i=0; i<n; i++){
            if(row1[i]!=row2[i] && (row1[i]=='R' || row2[i]=='R')){
                flag=1;
                break;
            }
        }
        if(flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}