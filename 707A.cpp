#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    char a[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    int count=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char pixel = a[i][j];
            if(pixel=='C' || pixel=='M' || pixel=='Y') count++;
        }
    }

    if(count!=0) cout << "#Color" << endl;
    else cout << "#Black&White" << endl;

    return 0;
}