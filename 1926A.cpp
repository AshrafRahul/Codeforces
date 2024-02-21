#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string a;
        cin >> a;

        int countA=0, countB=0;
        for(int i=0; i<a.size(); i++) {
            if(a[i] == 'A') countA++;
            else if(a[i] == 'B') countB++;
        }
        if(countA > countB) cout << "A" << endl;
        else if(countA < countB) cout << "B" << endl;
    }

    return 0;
}