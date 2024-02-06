#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string color;
        cin >> color;

        int r=0, g=0, b=0;
        int no=0;

        for(int i=0; i<6; i++){
            if(color[i] == 'r') r++;
            if(color[i] == 'g') g++;
            if(color[i] == 'b') b++;
            if(color[i] == 'R' && r==0) no++;
            if(color[i] == 'G' && g==0) no++;
            if(color[i] == 'B' && b==0) no++;
        }
        if(no!=0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}