#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a[2][2];
        int one=0;

        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                cin >> a[i][j];
                if(a[i][j] == 1) one++;
            }
        }
        if(one == 0) cout << 0 << endl;
        else if(one == 4) cout << 2 << endl;
        else cout << 1 << endl;
    }    

    return 0;
}