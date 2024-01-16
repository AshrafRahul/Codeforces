#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int val;
        cin >> val;
        //int val = abs(n);

        if(val>=1900) cout << "Division 1" << endl;
        else if(val>=1600 && val<=1899) cout << "Division 2" << endl;
        else if(val>=1400 && val<=1599) cout << "Division 3" << endl;
        else if(val<=1399) cout << "Division 4" << endl;
    }

    return 0;
}