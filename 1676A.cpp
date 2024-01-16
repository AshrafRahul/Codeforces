#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int firstThreeNum = n/1000;
        int lastThreeNum = n%1000;

        int sumFirstThreeNum = (firstThreeNum/100) + (firstThreeNum%100)/10 + (firstThreeNum%10);
        int sumLastThreeNum = (lastThreeNum/100) + (lastThreeNum%100)/10 + (lastThreeNum%10);

        if(sumFirstThreeNum == sumLastThreeNum) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}